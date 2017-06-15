#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string line;
		getline(cin, line);
		int len = line.size();
		int tmp = 1;
		for (int i = 1; i <= len; i++)
		{
			if(i==len||line[i]!=line[i-1])
			{
				cout << line[i-1];
				if(tmp==2)
				{
					cout << line[i-1];
				}
				else if(tmp>2)
				{
					cout << tmp;
				}
				tmp = 1;
			}
			else
			{
				tmp++;
			}
		}
		cout << '\n';
	}
	return 0;
}
