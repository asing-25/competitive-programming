//Problem 3D Printed Statues - https://open.kattis.com/problems/3dprinter
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int printer{1},statues{};
  cin >> statues;
  int days{};
  while (printer < statues)
  {
    printer *= 2;
    days++; 
  }
  cout << days + 1;
  return 0;
}
