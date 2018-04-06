#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
  double a, b, c;
  cin >> a >> b >> c;
  if(a==0)
  {
    if(b==c) cout << "NWR";
    else cout << "BR";
  }
  else
  {
    cout << fixed << setprecision(2) << round((c-b)*100/a)/100;
  }
  return 0;
}
