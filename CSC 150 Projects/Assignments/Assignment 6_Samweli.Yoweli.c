/* Author:  Samweli Yoweli            */
/* Created Date:   11/11/2023     */
/* Revised by:      Samweli Yoweli    */
/* Revision Date:     11/20/2023  */

/* Write a program prompts user to enter 12 digit of a barcode
compares to final barcode digit; if good outputs validated
otherwise outputs error in barcode*/

    /* User will input 12-digit UPC*/
/* Outputs barcode with message validated when digits match
Outputs barcode with message error in barcode
when digits unmatched */


/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- */
    #define barcode_size 12

/* ---- Function prototype definitions ---- */

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main()
{

/* declares the local variables */
int even_num;
int odd_num;
int check_digit;
int last_digit;

/* declares the size of the array UPC,
and gives it the integer data type */
int UPC[12];

/* Prompts the user input */
printf("Enter the 12 digits of a barcode> ");
printf("\nSeparate each digit with an <enter>\n");

/* while loop counter initialzied at 0
and loops when i is less than 0.
scanning in the user's input */
int i = 0;

while(i < 12) {
    scanf("%d", &UPC[i]);
    i++;
}

/* adds the sum of the digits
in the odd-numbered positions multiplies by 3 */
odd_num = (UPC[0] + UPC[2] + UPC[4]
             + UPC[6] + UPC[8] + UPC[10]) * 3;

/* adds the sum of the digits
in the even-numbered positions */
even_num = (UPC[1] + UPC[3] + UPC[5] + UPC[7]
           + UPC[9]) + odd_num;

/* calculates the last digit
by taking the remainder of the even number */
last_digit = even_num %10;


check_digit = UPC[11];

/* if statement and gives the check digit = 0
if our last_digit is equal to 0 */
if(last_digit == 0){

    check_digit = 0;
}

/* when our last_digit isn't equal to zero
our check digit will be equal to 10 - the last digit */
else{
    check_digit = 10 - last_digit;
}

/* if statement so check if our check digit is equal
to UPC[11] and displays the barcode is validated */
if(check_digit == UPC[11]){
    printf("----> barcode is validated\n");
        }

/* when our check_digit isn't equal to UPC[11]
is displays error in barcode */
else {
        printf("----> error in barcode\n");
     }

/* displays the odd and even numbered barcode values */
printf("\nOdd numbered barcode value = %d", odd_num);
printf("\nEven numbered barcode value = %d", even_num);
return (0);

}

