#include <stdio.h> 
#include <stdlib.h>


int num1, num2, num3;

int maxBetween(num1,num2,num3){
if(num1 >= num2 && num1 >= num3){
    return num1;
}else if (num2 >= num1 && num2 >= num3){
    return num2;
} else{
    return num3;
}
}

int main(){

printf("Anser: %d \n", maxBetween(1,2,3));
return 0;
}