#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;


int main ()
{
        string input, tekst = "";
        while(getline(cin, input)) {
          if(tekst != "")
          {
            tekst += "\n";
          }
          tekst+=input;
        }
        for (int i = 0; i < (int)tekst.size(); i++) {
                if(tekst[i]==' ') {
                        tekst[i+1] = toupper(tekst[i+1]);
                } else {
                  cout << tekst[i];
                }

        }
        return 0;
}
