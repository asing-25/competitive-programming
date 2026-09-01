//Problem Cold-puter Science - https://open.kattis.com/problems/cold
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int n;
  cin >> n;
  int array[n];
  int zero{};
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
    if (array[i] < 0)
      zero++;
  }

  cout << zero; 

  return 0;
}
