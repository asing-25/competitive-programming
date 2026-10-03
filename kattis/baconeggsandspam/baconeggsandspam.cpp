//Problem Bacon, Eggs, and Spam - https://open.kattis.com/problems/baconeggsandspam
#include <iostream>
#include <sstream>
#include <set>
#include <map>

using namespace std;

int main()
{
  int n;
  while(cin >> n && n != 0)
  {
    cin.ignore();
    map <string, set<string>> order; 
    for(int i = 0; i < n; i++)
    {
      string line;
      getline(cin , line); 
      stringstream ss(line); 
      string name;
      ss >> name; 
      string food;
      while(ss >> food)
      {
        order[food].insert(name); 
      }
    }
    for(const auto& item : order)
    {
      cout << item.first;
      for(const auto&names : item.second)
      {
        cout << ' ' << names; 
      }
      cout << '\n'; 
    }
  }
  return 0;
}
