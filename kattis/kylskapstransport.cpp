//Problem Fridge Transport - https://open.kattis.com/problems/kylskapstransport
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int pa, pb, ka, kb, total;
  cin >> pa >> ka >> pb >> kb >> total;
  int min_cost = 2147483;
  int best_a{}, best_b{};
  int max_a{};
  if (total % ka == 0)
    max_a = total / ka;
  else
    max_a = (total / ka) + 1;
  for (int a_trip = 0; a_trip <= max_a; a_trip++)
  {
    int i = (a_trip * ka);
    int j = a_trip * pa;
    int k = total - i;
    int m{};
    if (k > 0)
    {
      if (k % kb == 0)
        m = k / kb;
      else
        m = (k / kb) + 1;
    }
    int l = m * pb;
    if (j + l < min_cost)
    {
      min_cost = j + l;
      best_a = a_trip;
      best_b = m; 
    }
  }
  cout << best_a << " " << best_b << " " << min_cost; 
  return 0;
}
