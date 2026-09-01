//Problem Booking a Room - https://open.kattis.com/problems/bookingaroom
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int r, n;
  cin >> r >> n;
  int array[r];
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  int found{};
  for (int i = 1; i <= r; i++)
  {
    bool left{true};
    for (int j = 0; j < n; j++)
    {
      if (i == array[j])
      {
        left = false;
        break;
      }
    }
    if (left == true)
    {
      found = i;
      break;
    }
  }
  if (found == 0)
  {
    cout << "too late";
  }
  else
  {
    cout << found;
  }
  return 0;
}
