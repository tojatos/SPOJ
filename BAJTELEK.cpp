#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

struct Point {
  ll x;
  ll y;
};
void loadVector(vector<Point> &v) {
  ll a, b;
  
  cin >> a >> b;
  Point p {a, b};
  v.push_back(p);

  while(cin >> a >> b) {
    Point p {a, b};
    v.push_back(p);
	if(v[0].x == a && v[0].y == b) break;
  }
}
ll calculateArea(vector<Point> &v) {
  int size = v.size();

  ll area = 0;
  for(int i = 0; i < size - 1; ++i) {
    area += v[i].x * v[i+1].y - v[i].y * v[i+1].x;
  }
  return area;
}
void start() {
  int n; cin >> n;
  while(n--) {
  vector<Point> blackLine;
  vector<Point> greyLine;

  loadVector(blackLine);
  loadVector(greyLine);

  ll blackArea = abs(calculateArea(blackLine));
  ll greyArea = abs(calculateArea(greyLine));
  if(blackArea > greyArea) swap(blackArea, greyArea);

  ll total = blackArea * 2 + greyArea * 3;
  cout << total << endl;
  }
}
