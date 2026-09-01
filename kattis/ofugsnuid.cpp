//Problem Öfugsnúið - https://open.kattis.com/problems/ofugsnuid
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int n; 
  cin >> n; 
  int array[n + 1];
  for(int i = 0; i < n; i++)
  {
      cin >> array[i]; 
  }
  for(int i = n - 1; i >= 0; i--)
  {
      cout << array[i] << '\n'; 
  }
  return 0;
}
