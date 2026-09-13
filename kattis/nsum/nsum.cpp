//Problem N-Sum - https://open.kattis.com/problems/nsum
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum{}, total{};
  for (int i = 1; i <= n; i++)
  {
    cin >> sum;
    total += sum;
    sum = 0;
  }
  cout << total;
}
