//Problem Cinema Crowds - https://open.kattis.com/problems/cinema
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int n{}, m{}, rejected{};
  cin >> n >> m;
  int array[m];
  for (int i = 0; i < m; i++)
  {
    cin >> array[i];
    if (array[i] > n)
      rejected++;
    else
    {
      n -= array[i];
    }
  }
  cout << rejected;
  return 0;
}
