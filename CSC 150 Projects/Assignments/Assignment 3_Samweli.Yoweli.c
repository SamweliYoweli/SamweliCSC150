/* Author: Samweli Yoweli             */
/* Created Date:  10/06/2023      */
/* Revised by:   Samweli Yoweli       */
/* Revision Date:    10/12/2023   */

/* Program calculates the monthly bill and average cost of a minute before taxes*/

    /* statement of inputs */
    /* User will need to enter weekday minutes used,
    User will need to enter night minutes used
    User will need to enter weekend minutes used*/

    /*statement of outputs */
    /* output Tax total,
    output total bill
    output minutes used over the 600 flat rate  */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */

    /* ---- Constant macro definitions ---- */
        #define Flat_rate 39.99

        #define add_minute_cost 0.40

        #define tax_rate 5.25/100

        #define Prepaid_weekday_minutes 600

/* ---- Function prototype definitions ---- */

/* function prototype definition for instructions */
void instructions(void);

/* function prototype definition for calculations */
void calculations(void);

/* function prototype definition for solution */
void solution(void);

/* ---- Declare Global variables ---- */

/* declares weekday minutes used as an integer data type
as a global variable */
int weekday_minutes_used;

/* declares night minutes used as an integer data type
as a global variable */
int night_minutes_used;

/* declares weekend minutes used as an integer data type
as a global variable */
int weekend_minutes_used;

/* declares pre_tax total as a double data type
as a global variable */
double pre_tax;

/* declares additional minutes as a integer data type
as a a global variable */
int additional_minutes;

/* declares tax total as a double data type
as a global variable */
double tax_total;

/* declares total bill as a double data type
as a global variable */
double total_bill;

/* declares decimal as a double data type
as a global variable */
double decimal;

/* declares average cost per minute as a double data type
as a global variable */
double average_cost;

/* ---- Main Function ---- */
int
main()
{

/* calls the function instructions */
instructions();

/* calls the function calculations */
calculations();

/* calls the function solution */
solution();

return(0);
}

/* ---- Function subprograms ---- */

/* function subprogram to display instructions to the user
and get their input of minutes*/
void instructions(){

/* asks the user to enter the weekday minutes used */
printf("Enter the weekday minutes used > ");

/* takes the user's input of weekday minutes used */
scanf("%d", &weekday_minutes_used);

/* asks the user to enter the night minutes used */
printf("Enter the night minutes used > ");

/* takes the user's input of night minutes used */
scanf("%d", &night_minutes_used);

/* asks the user to enter the weekend minutes used */
printf("Enter the weekend minutes used > ");

/* takes the user's input of weekend minutes used */
scanf("%d", &weekend_minutes_used);
}

/* calculating the tax total and total bill */
void calculations(){

/* when weekday minutes used is greater than 600
then it will execute this if statement */
    if (weekday_minutes_used > 600) {

    /* calculating additional minutes by subtracting the
    weekday minutes used from the prepaid weekday minutes */
    additional_minutes = weekday_minutes_used - Prepaid_weekday_minutes;

    /* calculating decimal by multiplying additional minutes
    by the additional minute cost */
    decimal = additional_minutes * add_minute_cost;

    /* calculating the tax total by multiplying additional minutes and
    the cost of the additional minutes then adding the flat rate */
    pre_tax = Flat_rate + decimal;

    /* calculating the tax total by
    multiplying the pre tax total by the tax percent */
   tax_total = pre_tax * tax_rate;

    /* calculates the total bill by adding the flat rate
    and the tax total and the  */
    total_bill = Flat_rate + tax_total + decimal ;

    /* calculates the average cost per minute before taxes */
    average_cost = Flat_rate/(weekday_minutes_used + weekend_minutes_used + night_minutes_used);
}

/* when the weekday minutes used is less than 600
then it will execute this else statement */
    else {

    /* calculating the tax total by multiplying the flat rate
    by the tax percent */
    tax_total = Flat_rate * tax_rate;

    /* calculates the total bill by adding
    Flat rate and the tax total */
    total_bill = Flat_rate + tax_total;

      /* calculates the average cost per minute before taxes */
    average_cost = Flat_rate/(weekday_minutes_used + weekend_minutes_used + night_minutes_used);
}

}

/* Displays the solution of the problem */

void solution(){

/* Displays the weekday minutes used */
printf("\nYour weekday minutes used are: %d.", weekday_minutes_used);

/* Displays the night minutes used */
printf("\nYour night minutes used are: %d.", night_minutes_used);

/* Displays the weekend minutes used */
printf("\nYour weekend minutes used are: %d.", weekend_minutes_used);

/* Displays the additional minutes used */
printf("\nYou used %d minutes over the %d flat rate weekday limit.", additional_minutes, Prepaid_weekday_minutes);

/* Displays the tax total in dollars */
printf("\nYour tax total is $%.2lf", tax_total);

/* displays average cost per minute before taxes */
printf("\nYour average cost per minute before taxes in $%.2lf", average_cost);

/* displays the total bill in dollars */
printf("\nYour total bill is $%.2lf\n", total_bill);

}
