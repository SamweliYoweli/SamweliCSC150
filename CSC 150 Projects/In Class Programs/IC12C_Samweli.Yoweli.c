/* Author:         Samweli Yoweli     */
/* Created Date:      10/26/2023  */
/* Revised by:         Samweli Yoweli*/
/* Revision Date:     10/26/2023  */

/*---In class exercise 12C---*/

        #include <stdio.h>      /* printf, scanf definitions */
int
main(void)
{
    FILE *inp; /* pointer to input file */
    FILE *outp; /* pointer to output file */
    double item;
    int input_status; /* status value returned by fscanf */

    /* Prepares files for input or output */
    inp = fopen("indata.txt", "r");
    outp = fopen("outdata.txt", "w");

    /*Read each item, format, and write */
    input_status = fscanf(inp, "%lf", &item);
while(input_status == 1){

    fprintf(outp,"%.2f\n", item);
    printf("%f\n",item);
    input_status = fscanf(inp, "%lf", &item);

}

/* Close the files */
    fclose(inp);
    fclose(outp);

    return(0);
}
