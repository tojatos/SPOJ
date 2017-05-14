#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
      string wyraz;
			cin >> wyraz;
      int len = wyraz.length()/2;
      for (int i = 0; i < len; i++)
      {
           std::cout << wyraz[i];
      }
      std::cout  << '\n';
		}

    return 0;
}
