#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char linia[201];
  while (cin.getline(linia, 201))
  {
    string str(linia);
    int dlugosc = str.length();
    for (int i = 0; i < dlugosc; i++)
    {
      if((int)str[i] >= 88)
      {
        str[i] -= 23;
      }
      else if(str[i]!=' ')
      {
        str[i] += 3;
      }
      cout << str[i];
    }
    cout << '\n';
  }

}
