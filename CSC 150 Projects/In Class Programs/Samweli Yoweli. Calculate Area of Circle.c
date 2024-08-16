/* This program is calculating the area of a Circle and it's Circumference */

#include <stdio.h>

double PI;

#define PI 3.14159

int main()
{
double area;
double circumf;
double radius;

printf("\nEnter radius of circle: ");

scanf("%lf", &radius);

area = PI * radius * radius;

printf("\nArea of a Circle: %lf", area);

//Calculates the circumference of a cricle
circumf = 2 * PI * radius;

printf("\nCircumference: %lf", circumf);

return (0);
}

