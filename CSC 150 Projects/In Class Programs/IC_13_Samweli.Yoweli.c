/* Author:    Samweli Yoweli          */
/* Created Date:   10/31/2023     */
/* Revised by:         Samweli Yoweli */
/* Revision Date:     10/31/2023  */

/* Program that calls a function with Output Arguments */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    void separate(double num, char *signp, int *wholep, double *fracp);

/* ---- Main Function ---- */
int
main(void)
{
    double value;   /* input-number to analyze */
    char sn;        /* output-sign of value */
    int whl;        /* output- whole number magnitude of value */
    double fr;      /* output- fractional part of value */

/*Gets data */
    printf("Enter a value to analyze> ");
    scanf("%lf", &value);

separate(value, &sn, &whl, &fr);
    /* Prints results */
    printf("Parts of %.4f\n sign: %c\n", value,sn);
    printf(" whole number magnitude: %d\n", whl);
    printf(" fractional part: %.4f\n",fr);

    return(0);
}

void
separate(double num,    /* input- value to be split */
         char *signp,   /* output - sign of num */
         int *wholep,   /* output - whole number magnitude of num */
         double *fracp) /*output - fractional part of num */
{
    double magnitude;

    if(num <0)
        *signp ='-';
    else if (num == 0)
        *signp = ' ';
    else
        *signp = '+';

    magnitude = fabs(num);
    *wholep = floor(magnitude);
    *fracp = magnitude - *wholep;
}
