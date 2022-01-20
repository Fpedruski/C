
#include <stdio.h> 
#include <stdlib.h>
 
int main()
 
{

int age; //Declaring a variable
printf("Enter your age:");
scanf("%d", &age); //ask what type of information we want from the user, this is a pointer

printf("Your'e %d years old\n", age);

// Only single chars
char grade;
printf("Enter your grade: \n");
scanf("%c", &grade);
printf("You'r grade is %c", grade);

// Using simple scanf
char name1[20]; // Min character to accept inside the name variable in order to 'C' allocate enough memory 
printf("Enter your name: "); 
scanf("%s", name1); // If we place a name and last name the space in between will make the program stop, thats why we use better fgets
printf("Your name is %s\n", name1);


// For string that need spaces in between word we use better fgets
char name2[20]; // Min character to accept inside the name variable in order to 'C' allocate enough memory 
printf("Enter your name: ");
fgets(name2, 20, stdin); // fgets is a function to receive the input, with 3 arguments, the variable the amount of characters accepted and stdin to prompt in the console
printf("Your name is %s\n", name2);

return 0;
}