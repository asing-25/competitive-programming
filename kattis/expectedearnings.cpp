//Problem Expected Earnings - https://open.kattis.com/problems/expectedearnings
#include <iostream>
using namespace std;

int main()
{
  double p{};
  int k{}, n{};
  cin >> n >> k >> p;
  double result = (p * n) - k;
  if (result >= 0)
    cout << "spela inte!" << "\n";
  else
    cout << "spela";
  return 0;
}
