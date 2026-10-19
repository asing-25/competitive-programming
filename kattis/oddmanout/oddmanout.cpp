//Problem Odd Man Out - https://open.kattis.com/problems/oddmanout
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int y{1}; 
  while (n--)
  {
    int x;
    cin >> x;
    vector<long long> party(x);
    for (int i = 0; i < x; i++)
    {
      cin >> party[i];
    }
    long long odd{};
    for (int i = 0; i < x; i++)
    {
      bool isOdd{true};
      long long man = party[i];
      for (int j = 0; j < x; j++)
      {
        if (j == i)
          continue;
        if (man == party[j])
        {
          isOdd = false;
          break;
        }
      }
      if (isOdd)
        odd = man;
    }
    cout << "Case #" << y << ": " << odd << '\n';
    y++;
  }
  return 0;
}
