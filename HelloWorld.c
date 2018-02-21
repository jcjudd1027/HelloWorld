#include <stdio.h>

int main (int argc, char* argv[])
{
  int i=0;
  printf("Hello World!\n");
  printf("You called this program with the following arguments:\n");
 
  if (argc == 0)
  {
    printf("\tNone\n");
  }    
  
  for (i=0; i<argc; i++)
  {    
    printf("\targument[%d]: %s\n", i, argv[i]);
  }
  printf("\n");
  
  return 0;
}
