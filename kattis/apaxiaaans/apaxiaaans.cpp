//Problem Apaxiaaaaaaaaaaaans! - https://open.kattis.com/problems/apaxiaaans
#include <iostream>
#include <string> 

using namespace std;

int main()
{
  string x;
  cin >> x;
  char y{0}; 
  string name;
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] == y)
    {
      continue;
    }
    else {
       name.push_back(x[i]);
       y = x[i]; 
    }
  }
  cout << name; 
  return 0;
}
