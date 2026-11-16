#include <stdio.h>

int main(void)
{
  long long int x;
  scanf("%lld", &x);
  printf("%lld ", x);

  while(x != 1)
  {
    if(x % 2 == 0)
    {
      x /= 2;
      printf("%lld ", x);
    }
    else
    {
      x = (x * 3) + 1;
      printf("%lld ", x);
    }
  }

  printf("\n");

  return 0;
}
