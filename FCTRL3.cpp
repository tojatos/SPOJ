#include <iostream>
using namespace std;

unsigned long long oblicz_silnie(unsigned long long l){
        if(l<=1) {
                return 1;
        } else {
                return l*oblicz_silnie(l-1);
        }

}
void wypisz_wynik(unsigned long long n){
        int c_dzies = n/10%10;
        int c_jedn = n%10;
        cout << c_dzies << " " << c_jedn << endl;
}
int main ()
{
        int przypadki;
        cin >> przypadki;
        for (int i = 0; i < przypadki; i++) {

                int n;
                cin >> n;
                if(n<10){
                  unsigned long long silnia = oblicz_silnie(n);
                  wypisz_wynik(silnia);
                } else {
                  wypisz_wynik(0);
                }
        }
        return 0;
}
