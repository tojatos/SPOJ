#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int x[4], y[4];
  for(int i = 0; i < 4; ++i) {
	cin >> x[i] >> y[i];
  }
  int total = (x[1] - x[0]) * (y[1] - y[0]) + (x[3] - x[2]) * (y[3] - y[2]);
  // calc overlapped
  int left = max(x[0], x[2]);
  int right = min(x[1], x[3]);
  int bottom = max(y[0], y[2]);
  int top = min(y[1], y[3]);
  if(left < right && bottom < top) {
	total -= (right - left) * (top - bottom);
  }
  cout << total;
}
