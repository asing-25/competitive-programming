// Problem Vacuumba - https://open.kattis.com/problems/vacuumba
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int m;
    cin >> m;
    double x{}, y{};
    double direction{90}; 
    for (int i = 0; i < m; i++)
    {
      double distance, angle;
      cin >> angle >> distance;
      direction += angle;
      double radian = direction * M_PI / 180.0;
      x += cos(radian) * distance;
      y += sin(radian) * distance;
    }
    cout << x << " " << y << '\n';
  }
  return 0;
}
