//Problem Tarifa - https://open.kattis.com/problems/tarifa
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int x, n;
  cin >> x >> n; 
  int p[n]; 
  int total{}; 
  int left{}; 
  for(int i = 0; i < n; i++)
  {
    cin >> p[i]; 
  }
  for(int i = 0; i < n; i++)
  {
    left = x - p[i]; 
    total += left; 
  }
  cout << total + x; 
  return 0;
}
