#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void gray(int n, int *tab, int k, char direction) {
  if(n==k) {
	for(int i = 0; i < n; ++i) {
	  cout << tab[i];
	}
	cout << endl;
	return;
  }
  if(direction) {
	tab[k] = 0;
	gray(n, tab, k+1, 1);
	tab[k] = 1;
	gray(n, tab, k+1, 0);
  } else {
	tab[k] = 1;
	gray(n, tab, k+1, 1);
	tab[k] = 0;
	gray(n, tab, k+1, 0);
  }

}
void start() {
  int t; cin >> t;
  while(t--) {
	int n; cin >> n;
	int tab[n];
	gray(n, tab, 0, 1);
	cout << endl;
  }
}
