/* This program is calculating the area of a Circle and it's Circumference */

#include <stdio.h>

double PI;

#define PI 3.14159

double Calc_area(double a1);
int main()
{
double area;
double circumf;
double radius;

//Displays instruction for user to enter a number
printf("\nEnter radius of circle: ");
scanf("%lf", &radius);

//Calculates area of a circle
area = Calc_area(radius);

//Displays the area of a circle
printf("\nArea of a Circle: %lf", area);

//Calculates the circumference of a circle
circumf = 2 * PI * radius;

//Displays the circumference of a circle
printf("\nCircumference: %lf", circumf);

return (0);
}
double Calc_area(double radius)
{
    return (PI * radius * radius);
}

