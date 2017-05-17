#include <iostream>
using namespace std;
int main()
{
  int ile = 0;
  char linia[201];
  while (cin.getline(linia, 201))
  {
    ++ile;
  }
  cout << ile;
}
