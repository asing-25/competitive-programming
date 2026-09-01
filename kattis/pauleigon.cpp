//Problem Paul Eigon - https://open.kattis.com/problems/pauleigon
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int n, p, q;
  cin >> n >> p >> q;
  int total = p + q;

  if ((total / n) % 2 == 0)
    cout << "paul";
  else
    cout << "opponent";
  return 0;
}
