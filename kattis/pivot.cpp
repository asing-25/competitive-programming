// Problem Pivot - https://open.kattis.com/problems/pivot
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> leftMax(n);
  vector<int> rightMin(n);
  leftMax[0] = a[0];
  for(int i = 1; i < n; i++)
  {
    if(a[i] > leftMax[i - 1])
        leftMax[i] = a[i];
    else
      leftMax[i] = leftMax[i - 1];
  }
  rightMin[n - 1] = a[n - 1];
  for(int i = n - 2; i >= 0; i--)
  {
    if(a[i] < rightMin[i + 1])
        rightMin[i] = a[i];
    else
      rightMin[i] = rightMin[i + 1];
  }
  int pivots{};
  for(int i = 0; i < n; i++)
  {
    bool left = true, right = true;
    if(i > 0)
      left = a[i] > leftMax[i - 1];
    if(i < n - 1)
      right = a[i] < rightMin[i + 1];
    if(left && right)
      pivots++; 
  }
  cout << pivots;
  return 0;
}
