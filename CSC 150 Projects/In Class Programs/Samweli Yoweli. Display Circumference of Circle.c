#include <stdio.h>

#define PI 3.14159

int main(void)
{
double radius;

double circum;

printf("Please enter radius of circle: ");

scanf("%lf", &radius);

circum = 2 * PI * radius;

printf("The circumference is %lf\n", circum);

return (0);
}
