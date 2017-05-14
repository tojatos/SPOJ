#include <iostream>
using namespace std;
int main()
{
  char znak;
  while (cin>>znak)
  {
    int l1, l2, wynik;
    cin >> l1 >> l2;
    switch (znak) {
      case '+':
        wynik = l1+l2;
        break;
      case '-':
        wynik = l1-l2;
        break;
      case '*':
        wynik = l1*l2;
        break;
      case '/':
        wynik = l1/l2;
        break;
      case '%':
        wynik = l1%l2;
        break;
    }
    cout << wynik << '\n';
  }
  return 0;
}
