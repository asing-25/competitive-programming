//Problem Different Distances - https://open.kattis.com/problems/differentdistances
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double x1, x2, y1, y2, p;
  cout << fixed << setprecision(10); 
  while (cin >> x1 >> y1 >> x2 >> y2 >> p && x1 != 0)
  {
    double output;
    output = pow(pow(abs((x1 - x2)), p) + pow(abs((y1 - y2)), p), 1 / p);
    cout << output << '\n';
  }
  return 0;
}
