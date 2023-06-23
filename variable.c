#include <stdio.h>
int main(){


/*
/* variable =   Allocated space in memory to store a value.
                We refer to a variable's name to access the stored value.
                That variable now behaves as if it was the value it contains.
                BUT we need to declare what type of data we are storing.
                */

int x; //declaration
x = 123; //initialization
int y = 321; // declaration + initialization


//Data type

int age = 21; //integer
float gpa = 3.5; // floating point number
char grade = 'C'; // Single Character
char name[] = "Bro"; // Array of character

printf("Hello %s ! \n",name);
printf("You are %d age years old \n", age);
printf("Your average grade is %c\n", grade);
printf ("your gpa is %f \n",gpa);
return 0;

}