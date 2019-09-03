#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  int t; cin >> t;
  while(t--) {
    int n; float d;
    cin >> n >> d;
    float num[n];
    for(int i = 0; i < n; ++i) {
      cin >> num[i];
    }
    float dmgSum = 0;
    for(int i = 0; i < n; ++i) {
      float k = (1-d)/(1 - num[i]);
      dmgSum += k;
    }
    cout << setprecision(6) << fixed << roundf(dmgSum * 100000) / 100000 << endl;
  }
}
