#include <iostream>
using namespace std;
int main()
{
  int szukana;
  while (cin >> szukana)
  {
    int dlugosc_ciagu, liczba_tmp, licznik = 0;
    cin >> dlugosc_ciagu;
    for (int i = 0; i < dlugosc_ciagu; i++)
    {
      cin >> liczba_tmp;
      if(liczba_tmp==szukana)
      {
        ++licznik;
      }
    }
    cout << licznik << '\n';
  }
}
