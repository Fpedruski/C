#include <stdio.h> 
#include <stdlib.h>
 
int main()
 
{

int array[10] = {1,2,3,4,5,6,7,8,9,10};
int sum = 0;
int i;

for (i = 0; i <10; i++)
{
    sum += array[i];
    // Print each number in the array
    // printf("Number: %d\n", array[i]);
}


/* sum now contains a[0] + a[1] + ... + a[9] */
printf("The sum of this array is: %d  \n", sum);

return 0;
}



