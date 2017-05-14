#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
      int n, x, y;
      cin >> n >> x >> y;
      for (int i = 0; i < n; i++)
      {
           if(i%x==0&&i%y!=0)
           {
            cout << i << ' ';
           }
      }
      cout << '\n';
		}

    return 0;
}
