//Problem Shopaholic - https://open.kattis.com/problems/shopaholic
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;   

int main()
{
  int n; 
  cin >> n; 
  vector<int> items(n);
  for(int i = 0; i < n; i++)
  {
    cin >> items[i]; 
  }
  sort(items.begin(), items.end(), greater<int>()); 
  long long discount{}; 
  for(int i = 2; i < n; i += 3)
  {
    discount += items[i]; 
  }
  cout << discount; 
  return 0; 
}
