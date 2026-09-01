//Problem Soda Sluper - https://open.kattis.com/problems/sodaslurper
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int e, f, c; 
  cin >> e >> f >> c; 
  int drank{}; 
  int left{e + f}; 
  while (left >= c)
  {
    if(left % c == 0)
    {
        drank += left / c; 
        left = left / c; 
    }
    else{
        drank += left / c; 
        left =  (left / c) + (left % c); 
    }
  }

  cout << drank; 

  return 0;
}
