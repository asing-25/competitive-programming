//Problem Timebomb - https://open.kattis.com/problems/timebomb
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string input[5];
  for(int i = 0; i < 5; i++)
  {
    getline(cin, input[i]);
  }
  int digits = (input[0].size() + 1) / 4;
  vector<string> patterns = {"***"
                             "* *"
                             "* *"
                             "* *"
                             "***",
                         "  *"
                             "  *"
                             "  *"
                             "  *"
                             "  *",
                         "***"
                             "  *"
                             "***"
                             "*  "
                             "***",
                         "***"
                             "  *"
                             "***"
                             "  *"
                             "***",
                         "* *"
                             "* *"
                             "***"
                             "  *"
                             "  *",
                         "***"
                             "*  "
                             "***"
                             "  *"
                             "***",
                         "***"
                             "*  "
                             "***"
                             "* *"
                             "***",
                         "***"
                             "  *"
                             "  *"
                             "  *"
                             "  *",
                         "***"
                             "* *"
                             "***"
                             "* *"
                             "***",
                         "***"
                             "* *"
                             "***"
                             "  *"
                             "***"};
  string time{};
  for(int i = 0; i < digits; i++)
  {
    bool found = false;
    for(int d = 0; d < 10; d++)
    {
      bool match = true;
      for(int j = 0; j < 5; j++)
      {
        for(int k = 0; k < 3; k++)
        {
          if(input[j][i * 4 + k] != patterns[d][j * 3 + k])
          {
            match = false;
            break;
          }
        }
        if(match == false)
          break;
      }
      if(match == true)
      {
        time += char('0' + d);
        found = true;
        break;
      }
    }
    if(found == false)
    {
      cout << "BOOM!!";
      return 0; 
    }
  }
  int output = stoi(time);
  if(output % 6 == 0)
    cout << "BEER!!";
  else
    cout << "BOOM!!";
  return 0;
}
