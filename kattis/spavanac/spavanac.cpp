//Problem Spavanac - https://open.kattis.com/problems/spavanac
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int a{}, b{};
  cin >> a >> b;
  if (b < 45)
  {
    b += 60;
    a -= 1;
  }

  if(a < 0)
      a += 24; 

  cout << a << " "<< b - 45 << '\n'; 

  return 0;
}
