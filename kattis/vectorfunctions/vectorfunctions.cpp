//Problem Vector Functions - https://open.kattis.com/problems/vectorfunctions
#include "vectorfunctions.h"

void backwards(std::vector<int>& vec)
{
  std::vector<int> backwards;
  for (int i = (vec.size() - 1); i >= 0; i--)
    backwards.push_back(vec[i]);
  for (int i = 0; i < backwards.size(); i++)
  {
    vec[i] = backwards[i];
  }
}

std::vector<int> everyOther(const std::vector<int>& vec)
{
  std::vector<int> other;
  for (int i = 0; i < vec.size(); i += 2)
  {
    other.push_back(vec[i]);
  }
  return other;
}

int smallest(const std::vector<int>& vec)
{
  int min{2001};
  for (int i = 0; i < vec.size(); i++)
  {
    if (min > vec[i])
      min = vec[i];
  }
  return min;
}

int sum(const std::vector<int>& vec)
{
  int sum{};
  for (int i = 0; i < vec.size(); i++)
    sum += vec[i];
  return sum;
}

int veryOdd(const std::vector<int>& suchVector)
{
  int odd{};
  for (int i = 0; i < suchVector.size(); i++)
  {
    if ((i % 2 != 0) && (suchVector[i] % 2 != 0))
      odd++;
  }
  return odd;
}
