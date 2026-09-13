// Problem Akcija - https://open.kattis.com/problems/akcija
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  long long n;
  cin >> n;
  vector<int> books(n, 0);
  for (int i = 0; i < n; i++)
  {
    cin >> books[i];
  }
  long long extra{}, total{};
  for (int i = 0; i < n; i++)
  {
    total += books[i];
  }
  sort(books.begin(), books.end(), greater<int>()); 
  for (int k = 2; k < n; k += 3)
  {
    extra += books[k];
  }
  long long price = total - extra;
  cout << price;
  return 0;
}
