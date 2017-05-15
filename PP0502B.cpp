#include <iostream>
using namespace std;

int main ()
{
        int liczba_testow;
        cin >> liczba_testow;
        for (int i = 0; i < liczba_testow; i++)
        {
                int n;
                cin >> n;
                int arr[n];
                for (int j = 0; j < n; j++) {
                  cin >> arr[j];
                }
                for (int k = n-1; k >= 0; k--) {
                  cout << arr[k] << " ";
                }
        }
        return 0;
}
