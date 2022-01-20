#include <stdio.h> 
#include <stdlib.h>

/* Here we are outside the main function */
/* We need to set the return type, for example void, that does not return nothing*/

// We can add parameters to be called when we need a function inside the main
void sayHi(char name[], int age){
    printf("Hello %s your'e %i \n", name, age);
/* Now we are inside ANOTHER function that calls and say hi*/
}

/* This is our MAIN FUNCTION */
int main(){

    // Here we can insert the parameters needed to proceeed with our function
    sayHi("Tom", 40);
    sayHi("Oscar", 10);
    sayHi("Mike", 20);
    return 0;

}



