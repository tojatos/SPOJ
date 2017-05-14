#include <iostream>
using namespace std;
int main()
{
  int rejestr[10] = {0};
  char znak;
  while (cin>>znak)
  {
    int l1, l2, wynik;
    bool isZ = false;
    cin >> l1 >> l2;
    switch (znak) {
      case 'z':
        rejestr[l1] = l2;
        isZ = true;
        break;
      case '+':
        wynik = rejestr[l1]+rejestr[l2];
        break;
      case '-':
        wynik = rejestr[l1]-rejestr[l2];
        break;
      case '*':
        wynik = rejestr[l1]*rejestr[l2];
        break;
      case '/':
        wynik = rejestr[l1]/rejestr[l2];
        break;
      case '%':
        wynik = rejestr[l1]%rejestr[l2];
        break;
    }
    if(!isZ){
      cout << wynik << '\n';
    }
  }
  return 0;
}
