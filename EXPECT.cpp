#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
		int number;
		while (cin>>number)
		{
			cout << number << '\n';
			if (number==42) {
				break;
			}
		}
	return 0;
}
