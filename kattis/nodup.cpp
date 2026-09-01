//Problem No Duplicates - https://open.kattis.com/problems/nodup
#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
  char sentence[81];
  cin.getline(sentence, 81);
  char words[80][81];
  int i = 0;
  int wordcount = 0;
  while (sentence[i] != '\0')
  {
    int j = 0;
    while (sentence[i] != ' ' && sentence[i] != '\0')
    {
      words[wordcount][j] = sentence[i];
      i++;
      j++;
    }

    words[wordcount][j] = '\0';
    wordcount++;

    if (sentence[i] == ' ')
      i++;
  }
  bool duplicate = false;
  for (int a = 0; a < wordcount; a++)
  {
    for (int b = a + 1; b < wordcount; b++)
    {

      int k = 0;
      bool same = true;
      while (words[a][k] != '\0' || words[b][k] != '\0')
      {
        if (words[a][k] != words[b][k])
        {
          same = false;
          break;
        }
        k++;
      }
      if (same)
        duplicate = true;
    }
  }

  if (duplicate)
    cout << "no";
  else
    cout << "yes";

  return 0;
}
