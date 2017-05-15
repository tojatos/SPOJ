#include <iostream>
using namespace std;

bool czy_jest_pierwsza(int liczba);
int main ()
{
        int liczba_testow;
        cin >> liczba_testow;
        for (int i = 0; i < liczba_testow; i++)
        {
                int liczba;
                cin >> liczba;
                bool jest_pierwsza = czy_jest_pierwsza(liczba);
                if(jest_pierwsza){
                  cout << "TAK\n";
                } else {
                  cout << "NIE\n";
                }

        }
        return 0;
}
bool czy_jest_pierwsza(int liczba)
{
  if(liczba<2){
    return false;
  }
  if(liczba != 2)
  {
          for (int j = 2; j < liczba; j++)
          {
                  if(liczba%j==0)
                  {
                          return false;
                  }
          }
  }
  return true;
}
