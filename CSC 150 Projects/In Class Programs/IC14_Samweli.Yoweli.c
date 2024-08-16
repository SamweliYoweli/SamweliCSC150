/* Author:       Samweli Yoweli       */
/* Created Date:    11/14/2023    */
/* Revised by:        Samweli Yoweli  */
/* Revision Date:      11/14/2023 */

/* ---- Statement of problem and brief description of algorithm to solve the problem ---- */
    /* Statement of input(s) */
    /* Statement of output(s) */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

        /*-- Constant macro defintion --*/

int
main()
{
    int num[10];
    double sum;
    int i;

    printf("enter ten numbers>\n ");

    for(i=0; i < 10; ++i)
        scanf("%d", &num[i]);

        sum = 0;
        i = 0;

    for(i = 0; i < 10; ++i){
            sum += num[i];
        }

        //printf("%.2lf\n\n", sum);

        printf("n            %% of total\n");
        printf("---------------\n");


    for(i=0; i < 10; i++)

           printf("%d    %2.2lf\n", num[i],((num[i]/sum)*100));

return(0);
}

