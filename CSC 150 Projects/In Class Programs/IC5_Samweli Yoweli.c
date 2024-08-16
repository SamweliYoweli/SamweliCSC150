/* Author: Samweli Yoweli       */
/* Created Date: 09/14/2023       */
/* Revised by:          */
/* Revision Date:       */

/* ---- Statement of problem and brief description of algorithm to solve the problem ---- */
    /* Statement of input(s) */
    /* Statement of output(s) */
/* Draw a stick figure */

#include <stdio.h> /*printf, scanf defintions */
#include <math.h>
/* Function prototypes */

void draw_circle(void);          /* Draws a circle */

void draw_intersect(void);      /* Draws intersecting lines */

void draw_base(void);           /* Draws a base line */

void draw_triangle(void);       /* Draws a triangle */

int num;

int
main(void)
{


printf("Enter a whole number between 0 and 9> ");
scanf("%d",&num);

    /* Draw a circle. */

draw_circle();

    /* Draw a triangle. */

draw_triangle();

        /* Draw intersecting lines. */
        /* Draw a base line. */
    /* Draw intersecting lines. */

draw_intersect();

    return(0);
}

/* Draws a circle */
void
draw_circle(void)
{
    printf("      * \n");
    printf("    *   *\n");
    printf("     * *\n");
}

/* Draws intersecting lines */
void
draw_intersect(void)
{
    printf("     /\\ \n");
    printf("    /  \\ \n");
    printf("   /    \\ \n");
}
/* Draws a base line */
void
draw_base(void)
{
    printf("   -------\n");
}

/* Draws a triangle */
void
draw_triangle()
{

printf("     / \\ \n");
printf("    / %d \\ \n",num);
printf("   /     \\ \n");

draw_base();
}

