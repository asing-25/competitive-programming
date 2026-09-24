//Problem Veci - https://open.kattis.com/submissions/20510977
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  string x;
  cin >> x;  
  for(int i = 0; i < x.size(); i++)
  {
    v.push_back(x[i] - '0');  
  }
  int origin{};
  int y{1}; 
  for (int i = v.size() - 1; i >= 0; i--)
  {
    origin += v[i] * y;
    y *= 10;
  }

  int max{9999999};
  do
  {
    int j = 1;
    int num{};
    for (int i = v.size() - 1; i >= 0; i--)
    {
      num += v[i] * j;
      j *= 10;
    }
    if (num > origin && num < max)
    {
      max = num;
    }
  } while (next_permutation(v.begin(), v.end()));
  if(max == origin || max == 9999999)
  {
    cout << 0; 
  }
  else {
   cout << max; 
  }
  return 0;
}
