//Problem Statistics - https://open.kattis.com/problems/statistics
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, x{1};
  while (cin >> n)
  {
    vector<int> test(n);
    for (int i = 0; i < n; i++)
    {
      cin >> test[i];
    }
    long long min{99999999}, max{-99999999};
    for (int i = 0; i < test.size(); i++)
    {
      if (test[i] < min)
        min = test[i];
      if (test[i] > max)
        max = test[i];
    }
    cout << "Case " << x << ": " << min << " " << max << " "<< max - min << "\n";   
    x++; 
  }
  return 0; 
}
