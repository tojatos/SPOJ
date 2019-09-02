#include<bits/stdc++.h>
#define ll long long
using namespace std; void start(); int main() { ios::sync_with_stdio(false); start(); return 0; } 

void start() {
  string line;
  while(getline(cin, line)) {
	istringstream is(line);
	int n; is >> n;
	set<int> numbers;
	numbers.insert(istream_iterator<int>(is), istream_iterator<int>());
	int len = numbers.size();
	if(n - 1 < len) {
	  cout << *next(numbers.rbegin(), n - 1) << endl;
	}
	else {
	  cout << '-' << endl;
	}
  }
}
