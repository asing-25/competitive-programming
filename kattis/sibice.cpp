//Problem Sibice - https://open.kattis.com/problems/sibice
#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

int main()
{
  int n, l, w; 
  int match; 
  cin >> n >> l >> w; 
  double diagonal = sqrt(l * l + w * w); 
  string array[n + 1]; 
  for(int i = 0; i < n; i++)
  {
    cin >> match; 
    if(match <= diagonal)
        array[i] = "DA"; 
    else 
        array[i] = "NE"; 
  }
  for(int i = 0; i < n; i++)
      cout << array[i] << "\n"; 
  return 0;
}
