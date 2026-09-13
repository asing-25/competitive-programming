//Problem Word - https://codeforces.com/contest/59/problem/A
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  string input;
  int upper{}, lower{};
  cin >> input;
  for (int i = 0; i < (int)input.size(); i++)
  {
    if (isupper(input[i]))
      upper++;
    else if (islower(input[i]))
      lower++;
  }
  if (upper > lower)
  {
    for (int i = 0; i < (int)input.size(); i++)
    {
      cout << static_cast<unsigned char>(toupper(input[i]));
    }
  }
  else
  {
    for (int i = 0; i < (int)input.size(); i++)
    {
      cout << static_cast<unsigned char>(tolower(input[i])); 
    }
  }
  return 0;
}
