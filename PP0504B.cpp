#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define T_SIZE 1001
char* string_merge(char*, char*);
int main()
{
    int t;
    char S1[T_SIZE], S2[T_SIZE], *S;
    cin >> t; /* wczytaj liczbę testów */
    cin.getline(S1, T_SIZE);
    while (t) {
        cin.getline(S1, T_SIZE, ' ');
        cin.getline(S2, T_SIZE);
        S = string_merge(S1, S2);
        cout << S << endl;
        delete[] S;
        t--;
    }
    return 0;
}
char* string_merge(char* s1, char* s2)
{
  string S;
  string str1(s1);
  string str2(s2);
  int strmin = std::min(str1.length(),str2.length());
  for (int i = 0; i<strmin; i++) {
   S += s1[i];
   S += s2[i];
  }
  char *cstr = new char[S.length() + 1];
  strcpy(cstr, S.c_str());
  return cstr;
}
