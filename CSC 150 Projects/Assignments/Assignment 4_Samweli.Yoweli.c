/* Author:    Samweli Yoweli          */
/* Created Date:   10/13/2023     */
/* Revised by:       Samweli Yoweli   */
/* Revision Date:       10/24/2023 */

/* Program creates a customized loan amortization table */

/* User will input principal, annual interest rate,
number of payments*/

/* Output the term number, interest accrued, monthly principal
 and the principal balance  */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */
/* ---- Main Function ---- */
int main()
{
/* declares local variables data types and their names */
double annual_interest;
double principal;
double monthly_interest;
double payment;
double principal_balance;
double Interest;
double monthly_principal;
double final_payment;
int loop_counter;
int number_of_payments;

/* Prompts the user to enter a principal */
printf("Enter the loan amount> $");
scanf("%lf", &principal);

/* Prompts the user to enter an annual interest rate */
printf("Enter the annual interest rate> ");
scanf("%lf", &annual_interest);

/* Prompts the user to enter the number of payments */
printf("Enter the number of payments> ");
scanf("%d", &number_of_payments);

/* calculates monthly interest */
monthly_interest = (annual_interest/100)/12;

/* calculates the payment per term */
payment = ((monthly_interest * principal)/(1-pow((1+monthly_interest),-number_of_payments)));

/* Displays the input on the amortization */
printf("\nPrincipal     $%.2lf\n", principal);
printf("Annual Interest %.2lf%%\n", annual_interest);
printf("Payment           $%.2lf\n", payment);
printf("Term              %d months\n\n", number_of_payments);
printf("Payment    Interest     Principal     Principal Balance\n");
printf("-------------------------------------------------------\n");


principal_balance = principal;

loop_counter = 0;

while(loop_counter < number_of_payments-1)
{
    loop_counter++;
    printf("%d", loop_counter);
Interest = monthly_interest * principal_balance;
    printf("            %.2lf", Interest);
monthly_principal = (payment - Interest);
    printf("        %.2lf",monthly_principal);
principal_balance = (principal_balance - monthly_principal);
    printf("             %.2lf\n", principal_balance);

}

 loop_counter++;

    printf("%d", loop_counter);
Interest = monthly_interest * principal_balance;
    printf("            %.2lf", Interest);
monthly_principal = (payment - Interest);
    printf("        %.2lf",monthly_principal);
principal_balance = (principal_balance - monthly_principal);
    printf("             %.2lf\n", principal_balance);
final_payment = Interest + monthly_principal;
    printf("-------------------------------------------------------\n");
    printf("Final Payment %.2lf\n\n", final_payment);

return(0);
}




