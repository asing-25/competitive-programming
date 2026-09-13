//Problem I've Been Everywhere, Man - https://open.kattis.com/problems/everywhere
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int t{};
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string array[n], word[n];
    bool found = 0;
    int diffrent{};
    for (int i = 0; i < n; i++)
    {
      cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (i != 0)
      {
        for (int j = 0; j < i; j++)
        {
          if (array[i] == word[j])
          {
            found = true;
          }
        }
      }
      if (!found)
      {
        diffrent++;
        word[i] = array[i];
      }
      found = 0; 
    }
    cout << diffrent << '\n';
  }
  return 0;
}
