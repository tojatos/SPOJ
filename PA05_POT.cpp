#include <iostream>
using namespace std;
int oblicz_wynik(int a, int b){
        int wynik;
        switch (a) {
        case 1:
                wynik = 1;
                break;
        case 2:
                switch (b%4) {
                case 0:
                        wynik = 6;
                        break;
                case 1:
                        wynik = 2;
                        break;
                case 2:
                        wynik = 4;
                        break;
                case 3:
                        wynik = 8;
                        break;
                }
                break;
        case 3:
                switch (b%4) {
                case 0:
                        wynik = 1;
                        break;
                case 1:
                        wynik = 3;
                        break;
                case 2:
                        wynik = 9;
                        break;
                case 3:
                        wynik = 7;
                        break;
                }
                break;
        case 4:
                switch (b%2) {
                case 0:
                        wynik = 6;
                        break;
                case 1:
                        wynik = 4;
                        break;
                }
                break;
        case 5:
                wynik = 5;
                break;
        case 6:
                wynik = 6;
                break;
        case 7:
                switch (b%4) {
                case 0:
                        wynik = 1;
                        break;
                case 1:
                        wynik = 7;
                        break;
                case 2:
                        wynik = 9;
                        break;
                case 3:
                        wynik = 3;
                        break;
                }
                break;
        case 8:
                switch (b%4) {
                case 0:
                        wynik = 6;
                        break;
                case 1:
                        wynik = 8;
                        break;
                case 2:
                        wynik = 4;
                        break;
                case 3:
                        wynik = 2;
                        break;
                }
                break;
        case 9:
                switch (b%2) {
                case 0:
                        wynik = 1;
                        break;
                case 1:
                        wynik = 9;
                        break;
                }
                break;
        case 0:
                wynik = 0;
                break;
        }
        return wynik;
}
int main ()
{
        int przypadki;
        cin >> przypadki;
        for (int i = 0; i < przypadki; i++) {
                int a, b;
                cin >> a >> b;
                int wynik = oblicz_wynik(a%10, b);
                cout << wynik << endl;
        }
        return 0;
}
