//Problem Cookie Selection - https://open.kattis.com/problems/cookieselection
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
  priority_queue<int> left; //max_heap
  priority_queue<int, vector<int>, greater<int>> right; //min_heap
  int first;
  cin >> first;
  right.push(first);
  string s;
  while(cin >> s)
  {
    if(s == "#")
    {
      cout << right.top();
      right.pop();
    }
    else {
      int x = stoi(s); 
      if(x > right.top())
      {
        left.push(x);
      }
      else {
      right.push(x);
      }
      if(left.size() == right.size() + 1)
      {
          left.push(right.top());
          right.pop();
      }
      if(right.size() == left.size() + 2)
      {
        right.push(left.top());
        left.pop();
      }
    }
  }
  return 0;
}
