#include <stdio.h>

int main()
{
  int (*ptr)() = main;
  printf("%p\n", main);
  return 0;
}
