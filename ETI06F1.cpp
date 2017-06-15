#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	const double PI = 3.141592654;
	double r, d;
	cin >> r >> d;
	double ans = PI*(r*r-d*d/4);
	cout << fixed << ans << '\n';
	return 0;
}
