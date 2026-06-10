#include <stdio.h>

int main ()
{
  int x, y;

  printf("Enter 1st number:\t");
  scanf("%d", &x);
  printf("Enter 2nd number:\t");
  scanf("%d", &y);

  if (x > y)
  {
    printf("The number %d is larger than %d.", x, y);
  }
  else if (x < y)
  {
    printf("The number %d is larger than %d.", y, x);
  }
  else
  {
    printf("The numbers %d, and %d are equal.", x, y);
  }

  return 0;
}