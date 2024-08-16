/* Author:       Samweli Yoweli       */
/* Created Date:     11/07/2023   */
/* Revised by:        Samweli Yoweli  */
/* Revision Date:     11/07/2023  */

/* Write a program that processes weekly employee time cards */
    /* hours worked and hourly rate */
    /* */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- */


/* ---- Function prototype definitions ---- */
void average(int num, double *total_pay, double *total_hours);

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main()
{
/* Declaring our local variables */
int num;
double average_rate;
int number_emp;
int count_emp;
double total_pay;
double rate;
double hours;
double pay;
double total_hours;
double new_hours;
double dollar_hours;

/* Asking for user input */
printf("Enter the number of employees to be processed.");
scanf("%d", &number_emp);

/* assigning total_pay,
total hours with the value 0.0 */
total_pay = 0.0;
total_hours = 0.0;


/* for loop intializes count a 0,
 when the count in less than the number of employees,
 count is incremented by 1 */

for(count_emp = 0; count_emp < number_emp; count_emp +=1){

printf("Hours> ");
scanf("%lf", &hours);

/* body of if statement is execuated when hours
less than or equal to 40 */
if(hours <= 40){

printf("Rate > $");
scanf("%lf", &rate);

pay = hours * rate;
printf("Pay is $%.2lf\n\n", pay);
total_pay = total_pay + pay;
total_hours = total_hours + hours;

}

/* else statement is execuated when hours
are greater than 40 */
else
{printf("Rate > $");
scanf("%lf", &rate);

/* calculates the old dollar pay */
dollar_hours = 40 * rate;

/* gets the new hour pay */
new_hours = hours - 40;
new_hours = new_hours * (1.5 * rate);

pay = dollar_hours + new_hours;
printf("Pay is $%.2lf\n\n", pay);
total_pay = total_pay + pay;
total_hours = total_hours + hours;

}
}

/* displays the total eployees paid,
total payroll, total hours, average rate per hour */
printf("*** Payroll Summary ***\n");
printf("\nTotal employees paid: %d", number_emp);
printf("\nTotal payroll is $%.2lf", total_pay);
printf("\nTotal hours are %.2lf", total_hours);
average(num, &total_pay, &total_hours);

return(0);
}

/* ---- Function subprograms ---- */
void average(int num, double *total_pay, double *total_hours){

double average_rate;

average_rate = *total_pay/ *total_hours;
printf("\nAverage rate per hour: $%.2lf", average_rate);

}

