//Problem Cinema Crowds Two - https://open.kattis.com/problems/cinema2
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int n, m, accepted{};  
  cin >> n >> m; 
  int array[m]; 

  for (int i = 0; i < m; i++)
  {
    cin >> array[i];
    if(n >= array[i])
    {
      n -= array[i]; 
      accepted++; 
    }
    else if(n < array[i]){
        break; 
    }
  }

  cout << m - accepted; 

  return 0;
}
