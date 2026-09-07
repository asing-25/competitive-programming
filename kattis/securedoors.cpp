// Problem Secure Doors - https://open.kattis.com/problems/securedoors
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
  int t;
  cin >> t;
  set<string> entered;
  set<string> exited;
  string action, person;
  while (t--)
  {
    cin >> action >> person;
    if (action == "entry")
    {
      auto result = entered.insert(person);
      if (result.second == false)
      {
        cout << person << " entered" << " (ANOMALY)" << '\n';
      }
      else
        cout << person << " entered" << '\n';
    }
    else
    {
      if (entered.find(person) == entered.end())
      {
        cout << person << " exited" << " (ANOMALY)" << '\n';
      }
      else
        cout << person << " exited" << '\n';

      entered.erase(person);
    }
  }
  return 0;
}
