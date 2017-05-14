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
      for (int i = 1; i < n; i+=2)
      {
        cout << tab[i] << ' ';
      }
      for (int i = 0; i < n; i+=2)
      {
        cout << tab[i] << ' ';
      }
      cout << '\n';
		}

    return 0;
}
