#include<stdio.h>
#include <string.h>

int main()
{
  char str[] = "THE eaRth is BeAUtiFuL";

  printf("Given string is: %s\n",str);

  printf("\nString after converting to the "
             "lowercase is: %s",strlwr(str));

  return 0;
}
