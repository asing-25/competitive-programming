#include <iostream>

using namespace std;

int main(void)
{
  int t{};
  cin >> t;
  while (t--)
  {
    int n{};
    cin >> n;
    int array[n];
    for (int i = 0; i <= n - 1; i++)
      cin >> array[i];

    bool zeroes = true, onezero = false;
    int first{-1}, last{-1};

    for (int i = 0; i <= n - 1; i++)
    {
      if (array[i] != 0)
      {
        zeroes = false;
        if (first == -1)
          first = i;
      }
    }
    for (int i = n - 1; i >= 0; i--)
    {
      if (array[i] != 0)
        if (last == -1)
          last = i;
    }

    while(first < last)
    {
        if(onezero == false)
        {
        if(array[first] != 0)
            onezero = false; 
        else 
            onezero = true;
        }
        first++; 
    }

    if (zeroes)
      cout << 0 << "\n";
    else if (onezero)
      cout << 2 << "\n";
    else
      cout << 1 << "\n";
  }
  return 0;
}
