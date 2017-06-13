#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int seg[n];
		for (int i = 0; i < n; i++)
		{
			cin >> seg[i];
		}
		int answer = n;
		for (int i = 0; i < n; i++)
		{
			answer +=seg[i];
		}
		answer--;
		cout << answer << '\n';
	}
	return 0;
}
