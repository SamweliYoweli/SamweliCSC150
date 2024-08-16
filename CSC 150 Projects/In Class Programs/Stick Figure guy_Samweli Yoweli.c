/* Author: Samweli Yoweli       */
/* Created Date: 09/14/2023       */
/* Revised by:    Samweli Yoweli      */
/* Revision Date:  09/21/2023     */

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

void draw_triangle(int x, char y1, char y2, char y3); /* Draws a triangle */

int
main(void)
{
    int num;

    char c1;
    char c2;
    char c3;

    printf("Enter 3 character team name(ex: Ace, SOX, BAD)>");
    scanf("%c %c %c", &c1,&c2, &c3);


printf("Enter a whole number between 0 and 9> ");
scanf("%d",&num);

    /* Draw a circle. */

draw_circle();

    /* Draw a triangle. */

draw_triangle(num,c1,c2,c3);

        /* Draw intersecting lines. */
        /* Draw a base line. */
    /* Draw intersecting lines. */

draw_intersect();

    return(0);
}

/* Draws a circle */
void draw_circle(void)

{
    printf("      * \n");
    printf("    *   *\n");
    printf("     * *\n");
}

/* Draws intersecting lines */

void draw_intersect(void)
{
    printf("     /\\ \n");
    printf("    /  \\ \n");
    printf("   /    \\ \n");
}
/* Draws a base line */

void draw_base(void)
{
    printf("   -------\n");
}

/* Draws a triangle */

void draw_triangle(int x, char y1, char y2, char y3)
{

printf("     / \\ \n");
printf("    / %d \\ \n",x);
printf("   / %c%c%c \\ \n", y1, y2, y3);

draw_base();
}

