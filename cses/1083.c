#include <stdio.h>

int main(void)
{
  long long n, x, sum = 0;
  scanf("%lld", &n);
  for(int i = 0; i <= n; i++)
  {
    sum += i;
  }
  for(int j = 1; j < n; j++)
  {
    scanf("%lld", &x);
    sum -= x;
  }
  printf("%lld\n", sum);

  return 0;
}
