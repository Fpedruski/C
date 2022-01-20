#include <stdio.h>
#include <stdlib.h>

int main()

{
double firstNumber;
double secondNumber;
double total;
// In order to use the floting or double we should use %lf in scanf

printf("Enter you'r first number:" );
scanf("%lf", &firstNumber);

printf("Enter the second number:");
scanf("%lf", &secondNumber);

//printf("Answer: %d", firstNumber + secondNumber) // We can use this statment as well

total = firstNumber + secondNumber;
printf("%lf\n",total);


return 0;
}

