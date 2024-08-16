/* Author:         Samweli Yoweli     */
/* Created Date:      10/26/2023  */
/* Revised by:         Samweli Yoweli*/
/* Revision Date:     10/26/2023  */

/*---In class exercise 12B---*/

        #include <stdio.h>      /* printf, scanf definitions */
int
main(void)
{
int m;
int *itemp;

    printf("Enter an integer value> ");
    scanf("%d",&m);
    printf("Using direct Referencing, the value of m is %d\n",m);

itemp = &m;
    printf("Using indirect Referencing, the value of m is %d\n",*itemp);

return(0);
}
