/* Author: Samweli Yoweli            */
/* Created Date: 09/26/2023       */
/* Revised by: Samweli Yoweli */
/* Revision Date: 09/26/2023  */

/* We need to find the population in Gotham City after 1990*/
    /* User needs to input a year*/
    /* Predicted population in Gotham City and the year the user has inputed*/


/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */


    /* Defined the Constat Macro rate  */
        #define rate 2.148


/* ---- Function prototype definitions ---- */

/* Function prototype definition for instructions */
void instructions(void);

/* Function prototype definition for time */
void time(void);

/*Function prototype definition for population */
void population(void);

/*Function prototype definition for solution */
void solution(void);


/* ---- Declare Global variables ---- */

/*Declares user given year as an integer data type as a global variable*/
int user_year;

/* Declares population as a double data type as a global variable*/
double Total_Pop;

/*Declares the actual year as an integer data type as a global variable*/
int real_year;


/* main function */
int
main()
{

/* Calls the function instructions */
instructions();

/* Calls the function time */
time();

/* Calls the function population */
population();

/* Calls the function solution */
solution();

return(0);
}

/*Function to display instructions to the user */
void instructions(){

/*Displays instructions to the user */
printf("Enter a year after 1990> ");
}

/*Function subprogram for getting the user's input of the year and
calculates the actual year by subtracting user given year from 1990*/
void time(){

/*Gets the user's input */
scanf("%d", &user_year);

/*calculates the actual year by subtracting user given year from 1990*/
real_year = user_year - 1990;

}

/*Function subprogram for calculating the population */
void population(){

/*Calculates the population by taking 53.966 + our constant macro rate then multiplying it by the year the user has entered */
Total_Pop = 53.966 + (rate * real_year);

}

/*Function subprogram for displaying the solution */
void solution(){

/* displays our user given year and the population in thousands */
printf("Predicted Gotham City population for %d (in thousands): %.3lf", user_year, Total_Pop);

}

