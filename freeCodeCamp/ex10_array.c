#include <stdio.h>
#include <stdlib.h>


int main()


{


int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

// Changing value in the array
// int luckyNumbers[1] = 200;

for(int i = 0; i < sizeof(luckyNumbers); i++)
{
printf("%i\n", luckyNumbers[i]);
}

// printf("%d \n", luckyNumbers[0]);
return 0;

}

