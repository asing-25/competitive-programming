//Problem Cinema Sitting - https://open.kattis.com/problems/cinemaseating
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int rows, columns; 
  cin >> rows >> columns; 
  vector<vector<int>> cinema(rows, vector<int>(columns));
  int booked; 
  cin >> booked;
  int r, c; 
  vector<int> neighbors(9); 
  for(int i = 0; i < booked; i++)
  {
    cin >> r >> c;  
    cinema[r - 1][c - 1] = 1; 
  }
  int neighbor{}; 
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < columns; j++)
    {
      if(cinema[i][j] != 1)
          continue;
      for(int nr = -1; nr <= 1; nr++)
      {
        for(int nc = -1; nc <= 1; nc++)
        {
          int dr = i + nr; 
          int dc = j + nc; 
          if(dc < 0 || dr < 0 || dr >= rows || dc >= columns || (dr == i && dc == j))
              continue; 
          if(cinema[dr][dc] == 1)
             neighbor++; 
        }
      }
      neighbors[neighbor]++; 
      neighbor = 0; 
    }
  }
  for(int i = 0; i < 9; i++)
  {
    cout << neighbors[i] << " "; 
  }
  return 0;
}
