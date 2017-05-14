#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
      float x, y, z, wiek_dziecka, miesiace;
      cin >> x >> y >> z;
      wiek_dziecka = (x+y-y*z)/(z-1);
      miesiace = wiek_dziecka*12;
      cout << abs((int)round(miesiace)) << '\n';
		}

    return 0;
}
