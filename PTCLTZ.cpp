#include <iostream>
using namespace std;
int get_n(int, int);
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		for (int i = 0; i < t; i++)
		{
      int s;
      cin >> s;
      int n = get_n(s, 0);
      cout << n << '\n';
		}

    return 0;
}
int get_n(int s, int n)
{
  if(s==1)
  {
    return n;
  }
  if(s%2==0)
  {
    return get_n(s/2, n+1);
  }
  if(s%2==1)
  {
    return get_n(3*s+1, n+1);
  }
}
