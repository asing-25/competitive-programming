//Problem Patuljci - https://open.kattis.com/problems/patuljci
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int array[9];
  int total = 100, sum{};
  for (int i = 0; i < 9; i++)
    cin >> array[i];
  for (int i = 0; i < 9; i++)
  {
    sum += array[i];
  }
  int target = sum - total;
  int needed{};
  int one, two;
  bool found = true;
  for (int i = 0; i < 9 && found; i++)
  {
    needed = target - array[i];
    for (int j = 0; j < 9; j++)
    {
      if (i != j && needed == array[j])
      {
        one = i;
        two = j;
        found = false;
        break;
      }
    }
  }
  for (int i = 0; i < 9; i++)
  {
    if (i == one || i == two)
      continue;
    cout << array[i] << '\n';
  }
  return 0;
}
