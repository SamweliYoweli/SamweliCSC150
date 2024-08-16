    #include <stdio.h>

    /*Calculate the factorial of a number. */

    int fact(int n) {

    if(n == 1)
        {

        return 1;

        }               // Specify the Base case 2
                          // Second thing to write down
    else
        {
        return n * fact(n-1);
                            // Specify Recursive procedure
                            // First thing to write down
        }
    }

    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("Factorial of a number %d is %d", n, fact(n));

    return 0;

    }

    // sub program for recursion

   /* Fact(int n) {

    if(n == 1)
    {
        return 1;               // Specify the Base case 2
                          // Second thing to write down
    }

    else
    {
    return n * Fact(n-1);
                            // Specify Recursive procedure
                            // First thing to write down
    }

    }
*/


    /*
    Notes
    Divide the problem into smaller sub-problems

    Calculate Fact(4)

    Fact(1) = 1
    Fact(2) = 2 * 1 = 2 * Fact(1)
    Fact(3) = 3 * 2 * 1 = 3 * Fact(2)
    Fact(4) = 4 * 3 * 2 * 1 = 4 * Fact(3)

    Fact(n) = n * Fact(n-1) */
