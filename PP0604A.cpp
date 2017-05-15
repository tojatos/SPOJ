#include <iostream>
#include <climits>
using namespace std;


int main ()
{
        int liczba_testow;
        cin >> liczba_testow;
        for (int i = 0; i < liczba_testow; i++)
        {
                int n, wynik;
                float srednia = 0;
                cin >> n;
                int tab[n];
                for (int j = 0; j < n; j++) {
                  cin >> tab[j];
                  srednia+=tab[j];
                }
                srednia = srednia/n;
                float tmp2 = INT_MAX;
                for (int k = 0; k < n; k++) {
                  float tmp = 0;
                  if(tab[k] > srednia)
                  {
                    tmp = tab[k]-srednia;
                  }
                  else
                  {
                    tmp = srednia-tab[k];
                  }
                  if(tmp2 > tmp)
                  {
                    tmp2 = tmp;
                    wynik = tab[k];
                  }
                }
                cout << wynik << endl;
        }
        return 0;
}
