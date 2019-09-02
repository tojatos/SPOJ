#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  map<unsigned char, int> result;
  char c;
  while((c = getchar()) != EOF) {
	result[c]++;
  }
  for(auto pair : result) {
	cout << (int)pair.first << ' ' << pair.second << endl;
  }
}
