// Problem A1 Paper - https://open.kattis.com/problems/a1paper
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  cout << setprecision(11) << fixed; 
  int n;
  cin >> n;
  double required = pow(2, n - 1);
  vector<int> papers;
  int x;
  for(int i = 0; i < (n - 1); i++)
  {
    cin >> x;
    papers.push_back(x);
  }
  for(int j = 0; j < papers.size(); j++)
    {
      if(papers[j] != 0)
      {
        required -= pow(2, (n - (j + 2))) * papers[j];
      }
      } 
  if(!(required <= 0))
  {
      cout << "impossible";
      return 0; 
  }
  double tape{};  
  long long new_required = 2; 
  for(int k = 0; k < n - 1; k++)
  {
    long joins = new_required / 2; 
    tape += joins * pow(2, (-3.0 / 4.0) - (k / 2.0)); 
    new_required = (new_required - papers[k]) * 2; 
    if(new_required <= 0)
        break; 
  }

  cout << tape << '\n'; 
  return 0; 
}
