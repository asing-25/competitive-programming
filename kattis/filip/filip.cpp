// Problem Filip - https://open.kattis.com/problems/filip
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  string a(3, ' '), reverse_a(3, ' ');
  cin >> a;
  int numa;
  for (int i = 0, j = 2; i < 3; i++, j--)
  {
    reverse_a[i] = a[j];
  }
  stringstream sa(reverse_a);
  sa >> numa;
  string b(3, ' '), reverse_b(3, ' ');
  cin >> b;
  int numb;
  for (int i = 0, j = 2; i < 3; i++, j--)
  {
    reverse_b[i] = b[j];
  }
  stringstream sb(reverse_b);
  sb >> numb;
  if(numa > numb)
      cout << numa; 
  else
      cout << numb; 
  return 0;
}
