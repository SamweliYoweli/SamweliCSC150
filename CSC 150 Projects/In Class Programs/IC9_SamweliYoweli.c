/* Author:    Samweli Yoweli          */
/* Created Date:    10/10/2023    */
/* Revised by:        Samweli Yoweli  */
/* Revision Date:      10/10/2023 */

/* Reads serial number and displays class of ship */
    /* Statement of input(s) */
    /* Statement of output(s) */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- */
        #define constant_macro value

/* ---- Function prototype definitions ---- */

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */

int main(void){

char class; /* input-character indicating class of ship */

/* Read first character of serial number */
printf("Enter ship serial number> ");
scanf("%c", &class); /* scans first letter */

switch (class) {
case 'B':
case 'b':
    printf("Battleship\n");
    break;
case 'C':
case 'c':
    printf("Cruiser\n");
    break;
case 'D':
case 'd':
    printf("Destroyer\n");
    break;
case 'F':
case 'f':
    printf("Frigate\n");
    break;
default:
    printf("Unknown\n");

}

return(0);
}
/* ---- Function subprograms ---- */

    /* Description of subprogram actions */

