#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int t; cin >> t;
  while(t--) {
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	//calculate determinant
	cout << (x1*y2+y1*x3+x2*y3-y2*x3-x1*y3-y1*x2 ? "NIE" : "TAK") << endl;
  }
}
