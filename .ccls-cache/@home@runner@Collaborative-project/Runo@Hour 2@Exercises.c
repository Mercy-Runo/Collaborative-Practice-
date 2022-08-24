/*It’s time for you to write a program on your own. Referring to the program in
Listing 2.1, write a C program that can print out a message: It’s fun to write
my own program in C.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("It’s fun to write
my own program in C.\n");
  return (0);
}

/*Update the program in Listing 2.1 by adding one more newline character into the
message printed out by the printf() function. You should see two lines of the
message on the screen after running the updated executable file:
Howdy, neighbor!
This is my first C program.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Hello my neighbor!\nThis is my first C program.\n");
  return (0);
}