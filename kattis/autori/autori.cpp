//Problem Autori - https://open.kattis.com/problems/autori
#include <iostream>
#include <string>

using namespace std; 

int main()
{
  string input; 
  cin >> input;
  string output;
  output.resize(input.size()); 
  output[0] = input[0]; 
  int j = 1; 
  for(int i = 1; i < input.size(); i++)
  {
   if(input[i] == '-')
   {
     output[j] = input[i + 1];  
     j++;
   }
   
  }
  for(int i = 0; i < output.size(); i++)
  {
    cout << output[i]; 
  }
  return 0; 
}
