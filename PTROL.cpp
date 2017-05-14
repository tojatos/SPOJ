#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
      int n;
      cin >> n;
      int tab[n];
      for (int i = 0; i < n; i++)
      {
           cin >> tab[i];
      }
      for (int i = 0; i < n; i++)
      {
        if(i+1 == n)
        {
          cout << tab[0] << ' ';
        }
        else
        {
          cout << tab[i+1] << ' ';
        }
      }
      cout << '\n';
		}

    return 0;
}
