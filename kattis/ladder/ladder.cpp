// Problem Ladder - https://open.kattis.com/problems/ladder
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int height, angle;
  double ladder;
  cin >> height >> angle;
  double radian = angle * M_PI / 180;
  ladder = height / sin(radian);
  cout << ceil(ladder); 
  return 0;
}
