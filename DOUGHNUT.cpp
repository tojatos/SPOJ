#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int t; cin >> t;
  int c, k, w;
  while(t--) {
	cin >> c >> k >> w;
	cout << ((k >= c * w) ? "yes" : "no") << endl;
  }
}
