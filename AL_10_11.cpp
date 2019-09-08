#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); cin.tie(NULL); start(); return 0; } 

void start() {
  int h1, h2, m1, m2, s1, s2;
  float l;
  while(scanf("%d:%d:%d %d:%d:%d %f", &h1, &m1, &s1, &h2, &m2, &s2, &l) == 7) {
    int h3 = h2 - h1;
    int m3 = m2 - m1;
    int s3 = s2 - s1;
    int diff = 3600 * h3 + 60 * m3 + s3;
    double result = l * 3.6 / diff;
    double result2 = l * 3.6 / (diff * 1.852);
    cout << setprecision(1) << fixed << result << ' ' << result2 << '\n';
  }
}
