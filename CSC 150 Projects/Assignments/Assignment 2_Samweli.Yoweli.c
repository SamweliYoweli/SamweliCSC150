/* Author: Samweli Yoweli            */
/* Created Date:   09/19/2023     */
/* Revised by:   Samweli Yoweli       */
/* Revision Date:   09/26/2023    */

/* Write a program to calculate the speed of sound in air at a given temperature in ft/sec*/

/* User is going to need to input a temperature*/

/* Print the temperature that the user entered,
speed of sound in the air at that temperature, at exactly 1 decimal point*/


#include <stdio.h>      /* printf, scanf definitions */
#include <math.h>       /* math function definitions needed as sqrt() is defined in this library*/


/*Declaring the global variables */

/* assigning the data type for temperature as double */

double temp;

/* assigning the data type for speed of sound in the air*/
double speed;

/* defining the constant macro for computing the speed of sound */
#define num 1086


/* ---- Function prototype definitions ---- */

/* Function prototype definition for Temperature */
void Temperature(void);

/*Function prototype definition for Calculation */
void Calculation(void);

/* Function prototype definition for result */
void result(void);

/*Function prototype definition for Instructions */
void Instructions(void);


int
main()
{

/* Calls the Instructions function */
Instructions();

/* Calls the Temperature function */
Temperature();

/* Calls the Calculation function */
Calculation();

/* Calls the result function */
result();

return(0);
}

/* Function subprogram for giving instructions to the user */
void Instructions(){

/* asks user to input a temperature */
printf("Please enter a temperature> ");

}

/* Function subprogram for getting temperature */
void Temperature(){

/* Taking the users input of temperature*/
scanf("%lf",&temp);

/* Displays the temperature that user has entered */
printf("Temperature is: %.1lf F\n", temp);

}

/* Function subprogram for calculating the speed of sound */
void Calculation(){

/* calculating the speed of sound in the air */
speed = num * (sqrt((5*temp + 297)/ 247));

}

/* Function subprogram for displaying the result */
void result(){

/*displays the temperature in (°F) and the speed of sound in ft/sec */
printf("The speed of sound at %.1lf F is %.1lf ft/sec", temp, speed);

}

