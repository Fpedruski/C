#include <stdio.h> 
#include <stdlib.h>
 
int main()
{
    //Characters
    char example1 = 'A';
    char example2[] = "Hello Word";
    //Numbers
    int example3 = 4;
    double example4 = 4.2;


    //Character
    printf("Calling a single string, %c\n", example1);

    //Full String
    printf("calling a full string, %s\n", example2);

    //Integer
    printf("Calling a number %d\n", example3);

    //Decimal
    printf("calling a decimal number, %f \n", example4);

    return 0;

}