#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); cin.tie(NULL); start(); return 0; }

ll FindLCM(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
ll rangeDivisor(ll m, ll n, ll a, ll b)
{
    // Find LCM of a and b
    ll lcm = FindLCM(a, b);

    ll a_divisor = n / a - (m - 1) / a;
    ll b_divisor = n / b - (m - 1) / b;

    // Find common divisor by using LCM
    ll common_divisor = n / lcm - (m - 1) / lcm;

    ll ans = a_divisor + b_divisor - common_divisor;
    return ans;
}
void start() {
  ll a, b, c, d;
  cin >> a >> b;
  while(cin >> c >> d) {
    cout << rangeDivisor(c, d, a, b) << '\n';
  }
}
