// Problem Babelfish -  https://open.kattis.com/problems/babelfish
#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main()
{
  map<string, string> dictionary;
  string key, value;
  string line;
  while (getline(cin, line))
  {
    if (line.empty())
      break;
    stringstream ss(line);
    ss >> value >> key;
    dictionary[key] = value;
  }
  string question;
  while (cin >> question)
  {
    if (dictionary.find(question) == dictionary.end())
    {
      cout << "eh" << "\n";
    }
    else
    {
      cout << dictionary[question] << "\n";
    }
  }
  return 0;
}
