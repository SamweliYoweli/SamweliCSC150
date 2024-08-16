/* Author:     Samweli Yoweli         */
/* Created Date:    11/30/2023    */
/* Revised by:          */
/* Revision Date:     11/30/2023  */

/* Figure 9.2 Recursive Function Multiply */
/* Performs integer multiplication using + operator.*/

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>

    /* ---- Constant macro definitions ---- */
        #define constant_macro value

/* ---- Function prototype definitions ---- */
int multiply(int,int);

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int
main()
{
    int m;
    int n;
    int ans;

    /* Gets data */
    printf("Enter an integer> \n");
    scanf("%d", &m);
    printf("Enter an integer> \n");
    scanf("%d", &n);

    /* Function call */
    ans = multiply(m,n);

    /* Displays the results */
    printf("\n\n The value of %d multiplied by %d is %d.\n", m,n,ans);

return(0);
}

/* ---- Function subprograms ---- */
int multiply(int m, int n)
{
    int ans;

    if(n==1)
        ans =m; /* simple case */
    else
        ans = m +multiply(m,n-1); /* recursive step */

    return(ans);
}



