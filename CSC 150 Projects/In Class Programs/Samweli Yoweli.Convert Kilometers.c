/*
* Converts distance in miles to kilometer.
*/
#include <stdio.h> /* printf,scanf defintions */
#define KMS_PER_MILE 1.609 /* conversion constant */

int
main(void)
{
    double miles, /* input - distance in miles. */
    kms; /* output - distance in kilometer */

    /* Get the distance in miles. */
    printf("Enter the distance in miles> ");
    scanf("%lf", &miles);

    /* Convert the distance to kilometers. */
    kms = KMS_PER_MILE * miles;

    /*Display the distance in kilometers. */
    printf("That equals %f kilometer. \n", kms);

    return 0;
}

