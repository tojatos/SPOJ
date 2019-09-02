#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  char c;
  while ((c = getchar()) != EOF) {
	getchar(); // space
	char x;
	while ((x = getchar()) != '\n') {
	  if(x != c)
		putchar(x);
	}
	putchar('\n');
  }
}
