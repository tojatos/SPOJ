#include <iostream>
using namespace std;
int main()
{
  int liczba_miast;
  cin >> liczba_miast;
  long long max_zysk = 0, max_tmp_suma = 0, tmp_zysk;
  for (int i = 0; i < liczba_miast; i++)
  {
       cin >> tmp_zysk;
       if(max_tmp_suma>0)
       {
         max_tmp_suma += tmp_zysk;
       }
       else
       {
         max_tmp_suma = tmp_zysk;
       }
       if(max_tmp_suma > max_zysk)
       {
         max_zysk = max_tmp_suma;
       }
  }
  cout << max_zysk;

}
