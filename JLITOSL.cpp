#include <iostream>
#include <cstring>
using namespace std;
string zamien(unsigned long long liczba)
{
  string wynik = "";
  unsigned long long do_odczytania;
  int ktora = 1;
  do {
    do_odczytania = liczba % 10;

    if((ktora-1)%3==0&&!(liczba%10==0&&liczba%100==0&&liczba%1000==0)){ // nie wyświetlaj napisu jeżeli są trzy zera przedtem
      if((ktora-1)/3==1) wynik = "tys. " + wynik;
      if((ktora-1)/3==2) wynik = "mln. " + wynik;
      if((ktora-1)/3==3) wynik = "mld. " + wynik;
      if((ktora-1)/3==4) wynik = "bln. " + wynik;
    }

    if(ktora%3==1&&(liczba/10%10)!=1)
    {
      switch (do_odczytania) {
       case 1:
        wynik = "jeden " + wynik;
        break;
       case 2:
        wynik = "dwa " + wynik;
        break;
       case 3:
        wynik = "trzy " + wynik;
        break;
       case 4:
        wynik = "cztery " + wynik;
        break;
       case 5:
        wynik = "piec " + wynik;
        break;
       case 6:
        wynik = "szesc " + wynik;
        break;
       case 7:
        wynik = "siedem " + wynik;
        break;
       case 8:
        wynik = "osiem " + wynik;
        break;
       case 9:
        wynik = "dziewiec " + wynik;
        break;
      }
      liczba /= 10;
      ktora++;
    }
    else if (ktora%3==1){
      switch (do_odczytania) {
       case 0:
        wynik = "dziesiec " + wynik;
       break;
       case 1:
        wynik = "jedenascie " + wynik;
        break;
       case 2:
        wynik = "dwanascie " + wynik;
        break;
       case 3:
        wynik = "trzynascie " + wynik;
        break;
       case 4:
        wynik = "czternascie " + wynik;
        break;
       case 5:
        wynik = "pietnascie " + wynik;
        break;
       case 6:
        wynik = "szesnascie " + wynik;
        break;
       case 7:
        wynik = "siedemnascie " + wynik;
        break;
       case 8:
        wynik = "osiemnascie " + wynik;
        break;
       case 9:
        wynik = "dziewietnascie " + wynik;
        break;
      }
      liczba /= 100;
      ktora += 2;
    }
    else if (ktora%3==2)
    {
      switch (do_odczytania) {
       case 2:
        wynik = "dwadziescia " + wynik;
        break;
       case 3:
        wynik = "trzydziesci " + wynik;
        break;
       case 4:
        wynik = "czterdziesci " + wynik;
        break;
       case 5:
        wynik = "piecdziesiat " + wynik;
        break;
       case 6:
        wynik = "szescdziesiat " + wynik;
        break;
       case 7:
        wynik = "siedemdziesiat " + wynik;
        break;
       case 8:
        wynik = "osiemdziesiat " + wynik;
        break;
       case 9:
        wynik = "dziewiecdziesiat " + wynik;
        break;
      }
      liczba /= 10;
      ktora++;
    }
    else
    {
      switch (do_odczytania) {
      case 1:
        wynik = "sto " + wynik;
        break;
       case 2:
        wynik = "dwiescie " + wynik;
        break;
       case 3:
        wynik = "trzysta " + wynik;
        break;
       case 4:
        wynik = "czterysta " + wynik;
        break;
       case 5:
        wynik = "piecset " + wynik;
        break;
       case 6:
        wynik = "szescset " + wynik;
        break;
       case 7:
        wynik = "siedemset " + wynik;
        break;
       case 8:
        wynik = "osiemset " + wynik;
        break;
       case 9:
        wynik = "dziewiecset " + wynik;
        break;
      }
      liczba /= 10;
      ktora++;
    }
  } while (liczba>=1);
  return wynik;
}
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
			unsigned long long liczba;
			cin >> liczba;
			cout << zamien(liczba) << '\n';
		}

    return 0;
}
