#include <iostream>

using namespace std;

int main()
{
  int n{}, t{};
  cin >> n >> t;
  char array[n];
   for(int i = 0; i < n; i++)
      cin >> array[i]; 
  for (int i = 1; i <= t; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (array[j] == 'B' && array[j + 1] == 'G')
      {
        array[j] = 'G';
        array[j + 1] = 'B';
        j += 1;
      }
    }
  }
  for(int i = 0; i < n; i++)
      cout << array[i]; 
  return 0;
}
