#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    while (cin >> a >> b >> c)
    {
      float delta = b*b-4*a*c;
      if(delta>0)
      {
        cout << 2 << '\n';
      }
      else if(delta == 0)
      {
        cout << 1 << '\n';
      }
      else
      {
        cout << 0 << '\n';
      }
    }
    return 0;
}
