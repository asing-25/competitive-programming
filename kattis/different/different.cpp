//Problem A Different Problem - https://open.kattis.com/problems/different
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long i, j; 
  while(cin >> i >> j)
  {
    cout << abs(j - i) << '\n'; 
  }
  return 0; 
}
