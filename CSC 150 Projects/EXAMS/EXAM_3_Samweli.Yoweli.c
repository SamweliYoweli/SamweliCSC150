/* Author:     Samweli Yoweli         */
/* Created Date:    12/12/2023    */
/* Revised by:        Samweli Yoweli*/
/* Revision Date:      12/12/2023 */

/* Create a program that displays numbers entered by the user in
descending order */

/* Get the user's input */
/* Display the numbers in descending order */

/* ---- Preprocessor Directives ---- */

    /* ---- Required libraries ---- */

        #include <stdio.h>      /* printf, scanf definitions */
        #include <math.h>       /* math function definitions */

    /* ---- Constant macro definitions ---- */
        #define size 4

/* ---- Function prototype definitions ---- */

// function prototype for sort_recursive
void sort_recursive(int [], int , int , int , int );


/* ---- Declare Global variables ---- */

/* ---- Main Function ---- */
int main()
{
    /* assigning list with an array element of
    of size which is 4 */
    int list[size];

    /* initializes i to zero and gives it an integer data type */
    int i = 0;

    /* displaying instructions to the user */
    printf("Enter a 2 digit integer: ");
    /* takes the user's input and puts it into the
    list array */
    scanf("%d", &list[i]);

    /* for loop to display more instructions to the user
    and get the input from them */
    for(i=1; i < size; ++i) /*
    note i has been initialized at 1 */
    {
        printf("\nEnter a different 2 digit integer: ");

        scanf("%d", &list[i]);
    }

    /* displays the numbers the user has entered */
    printf("\nYou entered the numbers: ");

    /* for loop to display the numbers the user
    has entered */
    for(i =0; i < size; i++){
        printf("%d ", list[i]);
    }

    /* calls the sort_recursive function */
    sort_recursive(list, 0, 0, size, 1);

    /* displays the message */
    printf("\nYour numbers in descending order are: ");

    /* similar to our previous for loop except
    this one displays the numbers in a order */
    for(i= 0; i < size; i++){
        printf("%d ", list[i]);
    }

return(0);
}

/* function subprogram to sort the numbers into descending order */
void sort_recursive(int list[], int i, int j, int list_size, int flag){

    /* assigns temp the integer data type */
    int temp;

    //checks to see if i is less than the list size + 1
    if(i < list_size + 1 ){
        // checks if it's flag (true or false), (1,0)
        if(flag)
        {
            j = i + 1;
        }
        //checks to see if j is less than the list size
        if(j < list_size)
        {
            /* if statement executes when the value in list i is greater
            than the value of list j */
            if(list[i]> list[j])
            {
                // assigns the value of list[i] to temp
                temp = list[i];
                // assigns the value of list[j] to list[i]
                list[i] = list[j];
                // assigns the value of temp to list[j]
                list[j] = temp;
            }

            sort_recursive(list, i, j+1, list_size, 0);
        }

        sort_recursive(list, i + 1, 0, list_size, 0);
    }

}

