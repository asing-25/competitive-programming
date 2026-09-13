// Problem Cut in Line - https://open.kattis.com/problems/cutinline
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> line(n);
  for (int i = 0; i < n; i++)
  {
    cin >> line[i];
  }
  int c;
  cin >> c;
  string who, whom, event;
  int index;
  for (int i = 0; i < c; i++)
  {
    cin >> event;
    if (event == "leave")
    {
      cin >> who;
      for (int j = 0; j < line.size(); j++)
      {
        if (line[j] == who)
        {
          index = j;
          break;
        }
      }
      line.erase(line.begin() + index);
    }
    else
    {
      cin >> who >> whom;
      for (int k = 0; k < line.size(); k++)
      {
        if (line[k] == whom)
        {
          index = k;
          break;
        }
      }
      line.insert(line.begin() + index, who);
    }
  }
  for (int i = 0; i < line.size(); i++)
  {
    cout << line[i];
    if (i != line.size() - 1)
      cout << '\n';
  }
  return 0;
}
