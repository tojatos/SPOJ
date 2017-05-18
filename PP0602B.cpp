#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
      int l, k;
      cin >> l >> k;
      int tab[l][k];
      //int fin_tab[l][k];
      for (int i = 0; i < l; i++)
      {
        for (int j = 0; j < k; j++)
        {
          cin >> tab[i][j];
        }
      }
      for (int i = 0; i < l; i++)
      {
        for (int j = 0; j < k; j++)
        {
          if (i==0) //1 rząd
          {
            if (j==k-1)
            {
              cout << tab[i+1][j] << ' ';
            }
            else
            {
              cout << tab[i][j+1] << ' ';
            }
          }
          else if(i==l-1) //2 rząd
          {
            if (j==0)
            {
              cout << tab[i-1][j] << ' ';
            }
            else
            {
              cout << tab[i][j-1] << ' ';
            }
          }
          else
          {
               if (j==0)
               {
                 cout << tab[i-1][j] << ' ';
               }
               else if(j==k-1)
               {
                 cout << tab[i+1][j] << ' ';
               }
               else
               {
                 cout << tab[i][j] << ' ';
               }
          }
        }
        cout << '\n';
      }
		}

    return 0;
}
