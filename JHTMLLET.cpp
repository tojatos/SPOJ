#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
  char kod[1001];
  while(cin.getline(kod, 1001))
  {
    for (int i = 0; kod[i] ; i++)
    {
      if(kod[i] == '<')
      {
        while(kod[i]!= '>')
        {
          putchar(toupper(kod[i]));
          i++;
        }
      }
      putchar(kod[i]);
    }
    putchar('\n');
  }
  return 0;
}
