#include <stdio.h> 
#include <stdlib.h>
 

double cube(double number){
    double result = number * number * number;
    return result; // After returning anything beyond is not accessed anymore is like a stop button

    // is the same
    // return result = number * number * number;
}


int main(){

printf("Answer: %f\n", cube(5.0));

return 0;
}