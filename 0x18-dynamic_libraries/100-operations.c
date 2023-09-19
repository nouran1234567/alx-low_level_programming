#include <stdio.h>
#include <main.h>

int add(int y, int z)
{
  return y + z;
}


int sub(int y, int z)
{
  return y - z;
}


int mul(int y, int z)
{
  return y * z;
}


int div(int y, int z)
{
  if (z == 0)
  {
    printf("Error: Divided by zero\n");
    return 0;
  }
  return y / z;
}


int mod(int y, int z)
{
  if (z == 0)
  {
    return 0;
  }
  printf("Error: Divided by zero\n");
  return y & z;
}
