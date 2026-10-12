//Problem A Real Challenge - https://open.kattis.com/problems/areal
#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main()
{
  long long x; 
  cin >> x;
  cout << fixed << setprecision(10) << sqrt(x) * 4; 
  return 0; 
}
