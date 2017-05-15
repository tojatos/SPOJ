#include <iostream>
using namespace std;
int NWD(int a, int b)
{
        if(a < b) {
                return NWD(a, b-a);
        } else if (a > b) {
                return NWD(a-b, b);
        } else {
                return a;
        }
}
int NWW(int a, int b)
{
        return a*b/NWD(a,b);
}
int main ()
{
        int liczba_testow;
        cin >> liczba_testow;
        for (int i = 0; i < liczba_testow; i++)
        {
                int a, b;
                cin >> a >> b;
                int wynik = NWW(a, b);
                cout << wynik << endl;
        }
        return 0;
}
