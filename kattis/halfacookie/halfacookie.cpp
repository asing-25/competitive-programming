//Problem Half a Cookie - https://open.kattis.com/problems/halfacookie
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  double r, x, y;
  while (cin >> r >> x >> y)
  {
    double area = M_PI * r * r;
    double d = sqrt(x * x + y * y);
    if (d > r)
    {
      cout << "miss" << "\n";
      continue;
    }
    double chord = 2 * sqrt(r * r - d * d);
    double tri_area = 1.0 / 2.0 * chord * d;
    double theta = 2 * acos(d / r);
    double sector_area = 1.0 / 2.0 * theta * r * r;
    double segment_area = sector_area - tri_area;
    double left_part = area - segment_area;
    if (left_part < segment_area)
      cout << fixed << setprecision(6) << segment_area << " " << left_part << "\n";
    else
      cout << fixed << setprecision(6) << left_part << " " << segment_area << "\n";
  }
  return 0;
}
