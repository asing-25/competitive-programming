//Problem Skener - https://open.kattis.com/problems/skener
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int r, c, zr, zc;
  cin >> r >> c >> zr >> zc;
  vector<string> matrix;
  for (int i = 0; i < r; i++)
  {
    string input{};
    cin >> input;
    matrix.push_back(input);
  }
  for (int i = 0; i < r * zr; i++)
  {
    for (int j = 0; j < c * zc; j++)
    {
      cout << matrix[i/zr][j/zc];
    }
    cout << '\n';
  }
  return 0;
}
