/* Author: Samweli Yoweli   */
/* Created Date: 09/15/2023   */
/* Revised by:          */
/* Revision Date:       */

/* Caculating mileage reimbursement for a sales person at a rate of $.35 per mile */


/* Library functions */

#include <stdio.h>
#include <math.h>

/* variables are being given their data type*/

double BOR; /* BOR = beginning odometer reading */
double EOR; /* EOR = ending odometer reading */
double MRR; /* mileage reimbursement rate */
double MT; /* miles traveled */
double RT; /* reimbursement total */

/* defining mileage reimbursement rate as $0.35 per mile */

#define MRR 0.35

int main()
{

/* displaying the name of the program */
printf("\nMILEAGE REIMBURSEMENT CALCULATOR");

/* display Enter beginning odometer reading */
printf("\nEnter beginning odometer reading> ");

/* Get the user's input for the beginning mileage */
scanf("%lf", &BOR);

/* display Enter ending odometer reading: */
printf("Enter ending odometer reading> ");

/* Get the user's input for the ending mileage */
scanf("%lf", &EOR);

/* assigning MT with the value of ending odometer reading subtracted by beginning odometer reading */
MT = EOR-BOR;

/* Reimbursement total is being calculated by taking the miles travel multiplied by the mileage reimbursement rate */
RT = MT * MRR;

/* displays the miles rates. Then displays the mileage rate, then your reimbursement total.*/
printf("You traveled %.1lf miles. At $%.2lf per mile, your reimbursement is $%.2lf.", MT, MRR, RT);

return(0);
}
