#include <iostream>
using namespace std;
void push(int *, int *);
void pop(int *, int *);
int main()
{
    int tab[10] = {0}, at = 0;
    char k;
		while (cin >> k) {
		  switch (k) {
		    case '+':
          push(tab, &at);
          break;
		    case '-':
          pop(tab, &at);
          break;
		  }
      //cout << "at: " << at << "\t tab[at-1]: " << tab[at-1] << '\n';
		}

    return 0;
}
void push(int *tab, int *at)
{
  int liczba;
  cin >> liczba;
  if(*at>9)
  {
    cout << ":(" << '\n';
  }
  else
  {
    tab[*at] = liczba;
    ++*at;
    cout << ":)" << '\n';
  }
}
void pop(int *tab, int *at)
{
  if(*at==0)
  {
    cout << ":(" << '\n';
  }
  else
  {
    --*at;
    cout << tab[*at] << '\n';
    tab[*at] = 0;
  }
}
