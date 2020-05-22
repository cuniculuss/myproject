#include <stdio.h>
int main (int argc, char *argv[])
{
  // TODO
  printf("Hello, %s!! How old are you?\n", argv[1]);
  int age;
  scanf("%i", &age);
  printf("So you are %i years old, hun?\n", age);
  if (age > 30)
    printf("I am sure you have lots of stories to tell!\n");
  else
    printf("Lots of nice adventures ahead!\n");
}
