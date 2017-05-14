#include <iostream>
using namespace std;
int main()
{
  int liczba, countCD = 0;
  bool isCD = true; // zignorowanie pierwszego 42
  while (cin>>liczba)
  {
    std::cout << liczba;
    if(liczba==42)
    {
      if(!isCD) // jeżeli ostatnia liczba nie była 42
      {
        countCD++; // zwiększamy liczbę wystąpień
        if(countCD>2)
        {
          break; // wychodzimy z while
        }
      }
      isCD = true; // ostatnia liczba to 42
    }
    else
    {
      isCD=false; // ostatnia liczba to nie 42
    }
    std::cout << '\n';
  }
    return 0;
}
