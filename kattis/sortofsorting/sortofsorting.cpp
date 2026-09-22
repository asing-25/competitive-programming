// Problem Sort of Sorting - https://open.kattis.com/problems/sortofsorting
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

using namespace std;

struct name
{
  string input;
  pair<int, int> num;
};

int main()
{
  int n;
  while (cin >> n && n)
  {
    vector<name> person(n);
    for (int i = 0; i < n; i++)
    {
      cin >> person[i].input;
      person[i].num.first = person[i].input[0];
      person[i].num.second = person[i].input[1];
    }
    stable_sort(person.begin(), person.end(),
            [](const name& a, const name& b) { return a.num < b.num; });
    for (int i = 0; i < n; i++)
    {
      cout << person[i].input << "\n"; 
    }
  }
  return 0; 
}
