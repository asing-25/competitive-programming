//Problem Stacking Cups - https://open.kattis.com/problems/cups
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

struct cup
{
  string name;
  int radius;
};

int main()
{
  int n;
  cin >> n; 
  vector<cup> cups(n);
  for (int i = 0; i < n; i++)
  {
    string input;
    cin >> input;
    stringstream ss;
    ss << input;
    int val;
    if (ss >> val)
    {
      val /= 2;
      cin >> input;
    }
    else
    {
      cin >> val;
    }
    cups[i].name = input;
    cups[i].radius = val;
  }
  sort(cups.begin(), cups.end(),
          [](cup a, cup b) 
          { 
          return a.radius < b.radius; 
          });
  for(int i = 0; i < cups.size(); i++)
  {
    cout << cups[i].name << '\n'; 
  }
  return 0;
}
