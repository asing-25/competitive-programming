//Problem Watermelon - https://codeforces.com/contest/4/problem/A
#include <stdio.h>

int main(void)
{
  int num;
  scanf("%d", &num);

  if(num > 2 && num % 2 == 0)
  {
    printf("YES");
  }
  else
    printf("NO");

  return 0;
}
