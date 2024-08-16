/* Author:     Samweli Yoweli         */
/* Created Date:    11/28/2023    */
/* Revised by:        */
/* Revision Date:       */

/* Finds the position of the smallest element in the subarray, list[first] through list[last].
    Pre: first < last and elements 0 through last of array list are defined.
    Post: Returns the subscript k of the smaller element in the subarray;
    i.e., list[k] <= list[i] for all i in the subarray */


/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- */
        #define constant_macro value

/* ---- Function prototype definitions ---- */
void select_sort(int list[], int list_size);
int get_min(int list[], int first_sub, int list_size);

/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int main()
{
    int list_size = 4;
    int list[list_size];
    int i = 0;

    printf("Enter a 2 digit integer>\n");
    scanf("%d", &list[i]);

    i=++i;

    for(i=1; i < list_size; ++i)
    {
        printf("Enter a different 2 digit integer> \n");
        scanf("%d", &list[i]);
    }
    printf("You entered the numbers: %d %d %d %d\n", list[0], list[1], list[2], list[3]);

    select_sort(list, list_size);

    printf("Your numbers in ascending order are: %d %d %d %d", list[0], list[1], list[2], list[3]);


return(0);
}


void
select_sort(int list[], int list_size){

int fill, temp, index_of_min;

for(fill = 0; fill <list_size; ++fill)
{
    index_of_min = get_min(list, fill, list_size);

    if(fill != index_of_min){
        temp = list[index_of_min];
        list[index_of_min] = list[fill];
        list[fill] = temp;
    }
}

}

int get_min(int list[],int fill, int list_size){

    int i;

    for(i = fill + 1; i < list_size; ++i)
        if(list[i] < list[fill])
            fill = i;

    return(fill);

}


