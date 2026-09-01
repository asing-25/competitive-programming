// Problem Bijele - https://open.kattis.com/problems/bijele
#include <iostream>
using namespace std;

int main()
{
  int correct[6] = {1, 1, 2, 2, 2, 8};
  int input[6]{};
  for (int i = 0; i <= 5; i++)
  {
    cin >> input[i];
  }
  for (int i = 0; i <= 5; i++)
  {
    if (correct[i] != input[i])
    {
      cout << correct[i] - input[i] << ' ';
    }
    else
    {
      cout << 0 << ' ';
    }
  }
  cout << "\n";
  return 0;
}
