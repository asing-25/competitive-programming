//Problem Odd Echo - https://open.kattis.com/problems/oddecho
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int a;
  cin >> a;
  string input[a + 1];
  for (int i = 1; i <= a; i++)
  {
    cin >> input[i];
  }
  cout << '\n';
  for (int i = 1; i <= a; i += 2)
  {
    cout << input[i] << "\n";
  }
  return 0;
}
