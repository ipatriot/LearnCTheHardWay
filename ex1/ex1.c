#include <stdio.h>

/* This is a comment */
int main(int argc, char *argv[])
{
  int distance = 100;
  int age = 21;
  int hey = 12;
  float decimal = 10.34;
  char name[8] = "woo woo";
  char lots_of_characters[1000] = "lkdflkasdjflasdjfl;dasjflasdjdfs";
  char one[1] = "d";

  //this is also a comment
  printf("You are %d miles away. \n", distance);
  printf("You are %d years old. \n", age);
  printf("Hey %d \n", hey);
  printf("Hello World!\n");
  printf("Hey you! \n");
  printf("Hey %s how are you? \n", name);
  printf("Random thought %s woo \n", lots_of_characters);
  printf("What is the number of life? %f \n", decimal);
  printf("Woo %c \n", one[0]);
  printf("This is a new thing, this is one character: %c \n", lots_of_characters[4]);
  printf("This is a decimal %f and a string %s \nWe just combined variables! jajaja \n", decimal, name);
  printf("Combine two differnt variables of the same: \nfirst string: %s second strings: %s \n", name, lots_of_characters);


  return 0;
}
