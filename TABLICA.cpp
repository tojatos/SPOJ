#include <iostream>
using namespace std;
int main()
{
    int* tab = new int[999999];
    int maxIndex = 0;
    for (int i = 0; cin >> tab[i]; i++)
    {
      maxIndex = i;
    }
    for (int i = maxIndex; i >= 0; i--)
    {
      std::cout << tab[i] << ' ';
    }
    return 0;
}
