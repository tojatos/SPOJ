#include <iostream>
using namespace std;
int reverse(int n){
  int remainder, reversedNumber = 0;
  while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}
void wypisz_wynik(int n, int times = 0 ) {
  int reversed = reverse(n);
  if(n==reversed){
    cout << reversed << " " << times << endl;
  } else {
    times++;
    wypisz_wynik(n+reversed, times);
  }
}
int main ()
{
        int liczba_testow;
        cin >> liczba_testow;
        for (int i = 0; i < liczba_testow; i++)
        {
                int a;
                cin >> a;
                wypisz_wynik(a);
        }
        return 0;
}
