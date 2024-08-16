/* Author: Samweli Yoweli             */
/* Created Date:    10/31/2023    */
/* Revised by:        Samweli Yoweli  */
/* Revision Date:     11/02/2023  */

/* Write a program to allow a machine to dispense change
(quarters, dimes, nickels, pennies) */
    /* User will input bill amount */
    /* Two paths if the bill can't be accepted, we say try another bill;
    Otherwise we print collect your change*/

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    /* ---- Function prototype definitions ---- */
     // void calculation(int *bill,int *Total,int item);

    /* ---- Main Function ---- */

    int
    main(void)
    {

    /*Opens the text file inventory */
    FILE *inp;
    FILE *outp;

    /* declares the local variables */
    double item;
    double bill;
    double Total;
    int input_status;

    inp = fopen("inventory.txt", "r");

    outp = fopen("endinginventory.txt", "w");

    input_status = fscanf(inp, "%lf", &item);

    fprintf(outp, "%.2f\n", item);

    /* Displaying the instructions to the user */
    printf("Enter the denomination of the bill to exchange>\n");
    scanf("%lf", &bill);

    /* calculating bill and taking the absolute value
    to input a positive value */
    bill = abs(bill);

    printf("You entered $%.2lf", bill);

    /* calls the calculation function */
    //void calculation();

     /* displays user instructions if the
    denomination is accepted */
    if (bill == 1 || bill == 5 || bill == 10 || bill == 20 || bill == 50)
    {
         /* calculates the ending inventory by taking
    the beginning inventory and subtracting the bill */
        Total = item - bill;

        printf("\nInsert the bill.\n");
        printf("\nPlease collect Your change.\n");
        printf("\n*** For Management only ***");
        printf("\nBeginning inventory: $%.2lf", item);
        printf("\nEnding inventory: $%.2lf\n", Total);

    }
      else{
        printf("\nThere is not enough, change, try a smaller bill.");
      }

    fprintf(outp,"%.2lf", Total);

    fclose(inp);
    fclose(outp);

    return(0);
    }

    /* Function Subprogram that calculates the Ending Balance */
   // calculation(int bill, int Total, int item){

    /* calculates the ending inventory by taking
    the beginning inventory and subtracting the bill */

    /* double ending_inventory = item - bill;
    printf("\n%f", item);
    printf("\n%lf", Total); } */

