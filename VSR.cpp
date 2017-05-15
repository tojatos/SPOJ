#include <iostream>
using namespace std;


int main ()
{
  int liczba_testow;
  cin >> liczba_testow;
  for (int i = 0; i < liczba_testow; i++)
  {
          int a, b;
          cin >> a >> b;
          int wynik = 2*(a*b)/(a+b);
          cout << wynik << endl;
  }
        return 0;
}
