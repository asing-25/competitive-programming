//Problem Left Beehind - https://open.kattis.com/problems/leftbeehind
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int x, y, n{};
  string array[15];
  for (int i = 0; i < 15; i++)
  {
    cin >> x >> y;
    if (x + y == 13)
      array[i] = "Never speak again.";
    else if (x == 0 && y == 0)
    {
      n = i;
      break;
    }
    else if (x == y)
      array[i] = "Undecided.";
    else if (x > y)
      array[i] = "To the convention.";
    else if (x < y)
      array[i] = "Left beehind.";
  }
  for(int i = 0; i < n; i++)
  {
    cout << array[i] << '\n'; 
  }
  return 0;
}
