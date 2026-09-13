#include <iostream>

using namespace std;

int main(void)
{
  int money{}, initial{}, bananas{}, total{};

  cin >> initial >> money >> bananas; 
  for(int i = 1; i <= bananas; i++)
    {
        total += initial * i; 
    }
 if(total <= money)
 {
     cout << 0; 
     return 0; 
 }
  cout << total - money; 

  return 0;
}
