#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int tab[n], fin_tab[n];
    for (int i = 0; i < n; i++)
    {
         cin >> tab[i];
    }
    for (int i = 0; i < n; i++)
    {
      if(i-k>=0)
      {
        fin_tab[i-k] = tab[i];
      }
      else
      {
        fin_tab[n+i-k] = tab[i];
      }
    }
    for (int i = 0; i < n; i++)
    {
        cout << fin_tab[i] << ' ';
    }
    cout << '\n';
    return 0;
}
