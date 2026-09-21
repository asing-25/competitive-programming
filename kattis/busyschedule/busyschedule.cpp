//Problem Busy Schedule - https://open.kattis.com/problems/busyschedule
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n;
  while (cin >> n && n != 0)
  {
    int hour{}, minute{};
    char colon;
    string meridian;
    vector<int> minutes(n);
    for (int i = 0; i < n; i++)
    {
      cin >> hour >> colon >> minute >> meridian;
      if (hour == 12 && meridian == "a.m.")
      {
        minutes[i] = minute;
      }
      else if (meridian == "a.m." || (meridian == "p.m." && hour == 12))
      {
        minutes[i] = hour * 60 + minute;
      }
      else
      {
        hour += 12;
        minutes[i] = hour * 60 + minute;
      }
    }
    sort(minutes.begin(), minutes.end());
    for (int i = 0; i < n; i++)
    {
      if (minutes[i] < 60)
      {
        if (minutes[i] < 10)
          cout << "12:" << "0" << minutes[i] << " a.m." << '\n';
        else
          cout << "12:" << minutes[i] << " a.m." << '\n';
      }
      else if (minutes[i] < 720 && minutes[i] >= 60)
      {
        if (minutes[i] % 60 < 10)
          cout << minutes[i] / 60 << ":0" << minutes[i] % 60 << " a.m." << '\n';
        else
          cout << minutes[i] / 60 << ":" << minutes[i] % 60 << " a.m." << '\n';
      }
      if (minutes[i] >= 720)
      {
        minutes[i] -= 720;
        if (minutes[i] < 60)
        {
          if (minutes[i] < 10)
            cout << "12:" << "0" << minutes[i] << " p.m." << '\n';
          else
            cout << "12:" << minutes[i] << " p.m." << '\n';
        }
        else
        {
          if (minutes[i] % 60 < 10)
            cout << minutes[i] / 60 << ":0" << minutes[i] % 60 << " p.m." << '\n';
          else
            cout << minutes[i] / 60 << ":" << minutes[i] % 60 << " p.m." << '\n';
        }
      }
    }
  }
  return 0;
}
