#include <iostream>

using namespace std;

int main(void)
{int t{}; 
  cin >> t;
  while(t--)
    {
      int a{}, b{}, c{}; 
      cin >> a >> b; 
      if(a % b == 0)
          cout << 0 << '\n'; 
      else 
      {
         c = a / b; 
         cout << ((c + 1) * b) - a << '\n';  
      }
    }
  return 0;
}
