//Problem Building Pyramids - https://open.kattis.com/problems/pyramids
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int length{}, height{};
  cin >> length;
  for (int i = 1; i * i <= length; i += 2)
  {
    length -= i * i;
    height++;
  }
  cout << height; 
  return 0;
}
