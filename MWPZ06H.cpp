#include <iostream>
#include <algorithm>
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
      sort(tab, tab + n);
      int max = tab[n-1];
      int winner_count = 0;
      for (int i = 0; i < n; i++)
      {
        if(tab[i]==max)
        {
          winner_count++;
        }
      }
      int final_tab[n];
      for (int i = 0; i < n; i++)
      {
        if(i<winner_count)
        {
          final_tab[i] = max;
        }
        else
        {
          final_tab[i] = tab[i-winner_count];
        }
      }
      for (int i = 0; i < n; i++)
      {
        cout << final_tab[i] << " ";
      }
      cout << '\n';
		}

    return 0;
}
