//Problem Right-of-Way - https://open.kattis.com/problems/vajningsplikt
#include <iostream>
using namespace std;

typedef long long ll;

bool straight(const string& a, const string& b, const string& c)
{
  if ((a == "North" && b == "South" && c == "West") || (a == "South" && b == "North" && c == "East") ||
      (a == "East" && b == "West" && c == "North") || (a == "West" && b == "East" && c == "South"))
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool turn(const string& a, const string& b, const string& c)
{
  if ((a == "North" && b == "East" && (c == "West" || c == "South")) ||
      (a == "South" && b == "West" && (c == "East" || c == "North")) ||
      (a == "East" && b == "South" && (c == "North" || c == "West")) ||
      (a == "West" && b == "North" && (c == "South" || c == "East")))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  string a, b, c;
  cin >> a >> b >> c;
  if (straight(a, b, c) || turn(a, b, c))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
