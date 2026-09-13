//Problem Lamps - https://open.kattis.com/problems/lamps
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int hours, pe;
  cin >> hours >> pe;
  int days{};
  for (int i = 1;; i++)
  {
    int total_hours = hours * i;
    int bulbs = (999 + total_hours) / 1000;
    if (total_hours >= 8000)
    {
      days = i;
      break;
    }
    double ki = (bulbs * 5) + total_hours * pe * 60.0 / 100000.0;
    double kl = 60 + total_hours * pe * 11.0 / 100000.0;
    if (ki > kl)
    {
      days = i;
      break;
    }
  }

  cout << days;

  return 0;
}
