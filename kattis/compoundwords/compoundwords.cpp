#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
  vector<string> input; 
  string x; 
  while(cin >> x)
  {
    input.push_back(x); 
  }
  set<string> compound; 
  for(int i = 0; i < input.size(); i++)
  {
    x = input[i]; 
    for(int j = 0; j < input.size(); j++)
    {
      if(j == i)
          continue; 
      else
      {
        compound.insert(x + input[j]); 
      }
    }
  }

  for(const string& element : compound)
      cout << element << '\n'; 
 return 0; 
}
