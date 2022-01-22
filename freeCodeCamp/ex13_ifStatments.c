#include <stdio.h> 
#include <stdlib.h>
 

int maxBetween(int num1, int num2){
    int result;
    if (num1 > num2)
    {
        result = num1;
    } else {
        result = num2;
    }

    return result;

}

int main(){

int num1, num2;

printf("Enter first number: ");
scanf("%d",&num1);
printf("Enter second number: ");
scanf("%d",&num2);

printf("Answer: %d", num1+num2);

// printf("%d is the biggest \n", maxBetween(2,400) );


    return 0;
}