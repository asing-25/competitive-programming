// Problem Massive Card Game - https://open.kattis.com/problems/massivecardgame
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> card(n);
  for (int i = 0; i < n; i++)
  {
    cin >> card[i];
  }
  sort(card.begin(), card.end());
  int q;
  cin >> q; 
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    long occurence = (upper_bound(card.begin(), card.end(), r) - 1) - 
                      lower_bound(card.begin(), card.end(), l);
    cout << occurence + 1 << '\n'; 
  }
  return 0;
}
