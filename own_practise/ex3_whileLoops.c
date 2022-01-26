#include <stdio.h> 
#include <stdlib.h>
 
int main()
 
{

int n = 0;

while (n < 10){
    n++;
    printf("Number: %d ",n);
}


// While loops can also execute infinitely if a condition is given which always evaluates as true (non-zero):

// while (1) {
//    /* do something */
// }

// Loop directives:
// There are two important loop directives that are used in conjunction with all loop types in C - the break and continue directives.

// The break directive halts a loop after ten loops, even though the while loop never finishes:

// int n = 0;
// while (1) {
//     n++;
//     if (n == 10) {
//         break;
//     }
// }


// In the following code, the continue directive causes the printf command to be skipped, so that only even numbers are printed out:

int nmbr = 0;
while (nmbr < 10) {
    nmbr++;

    /* check that nmbr is odd */
    if (nmbr % 2 == 1) {
        /* go back to the start of the while block */
        continue;
    }

    /* we reach this code only if nmbr is even */
    printf("The number %d is even.\n", nmbr);
}

return 0;
}