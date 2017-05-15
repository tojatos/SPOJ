#include <iostream>
using namespace std;

int main ()
{
        string input, tekst = "";
        while(getline(cin, input)) {
          for (int i = (int)input.size()-1; i >= 0 ; i--) {
                  cout << input[i];
          }
          cout << endl;
        }

        return 0;
}
