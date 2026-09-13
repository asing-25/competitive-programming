//Problem Modulo - https://open.kattis.com/problems/modulo
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  int numbers{};
  int array[10]{};
  for (int i = 0; i < 10; i++)
  {
    int number{};
    cin >> number;
    array[i] = number % 42;
  }
  for (int i = 0; i < 10; i++)
  { 
    bool duplicate = false; 
    for (int j = 0; j < i; j++)
    {
      if(array[i] == array[j])
      {
        duplicate = true; 
        break; 
      }
    }
    if(!duplicate)
      numbers++; 
  }
  cout << numbers << "\n";
  return 0;
}
