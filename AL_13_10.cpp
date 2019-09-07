#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); cin.tie(NULL); start(); return 0; } 

bool find(string a, string b) {
  int bLen = b.size();
  int pointer = 0;
  for(auto i : a) {
    if(i == b[pointer]) {
      pointer++;
      if(pointer == bLen) {
        return true;
      }
    }
  }
  return false;
}
void start() {
  int t; cin >> t;
  while(t--) {
    string a, b;
    cin >> a >> b;
    cout << (find(a, b) ? "Tak" : "Nie") << '\n';
  }
}
