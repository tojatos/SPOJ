#include <iostream>
using namespace std;

void dodaj(){
  int suma = 0;
  int n;
  while(cin >> n){
    suma += n;
    cout << suma << endl;
  }
}
int main ()
{
        dodaj();
        return 0;
}
