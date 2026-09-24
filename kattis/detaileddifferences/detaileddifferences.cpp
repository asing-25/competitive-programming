//Problem Detailed Differences - https://open.kattis.com/problems/detaileddifferences
#include <iostream>
#include <string>

using namespace std; 

int main()
{
  int n; 
  cin >> n; 
  while(n--)
  {
    string first; 
    string second; 
    cin >> first; 
    cin >> second; 
    for(int i = 0; i < first.size(); i++)
    cout << first[i]; 
    cout << '\n'; 
    for(int i = 0; i < second.size(); i++)
    cout << second[i];
    cout << '\n'; 
    for(int i = 0; i < first.size(); i++)
    {
      if(first[i] == second[i])
      {
          cout << "."; 
      }
      else {
         cout << "*"; 
      }
    }
    cout << "\n"; 
  }
  return 0; 
}
