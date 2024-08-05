#include <stdio.h>
int main(){
    /*variable = allocated space in memory to store a value.
    we refer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains.
    BUT we need to declare what type of data we are storing.
    */
   int x; // declaration %d
   x = 123; // initialization
   int y = 321; // declaration + initialization

   int age = 22; // integer
   float weight = 55.5; // floating point number
   char grade = 'A'; // single character
   char name[] = "Nguyen Anh Thien";// array of characters
   printf("How old are you?\nI %d years old\n",age);
   printf("I %0.1f kilograms\n", weight);
   printf("Hello %s\n", name);
   printf("My grade is %c\n", grade);
    return 0;

}