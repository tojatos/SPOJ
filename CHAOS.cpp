#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
bool is_pal(string *g, string *m)
{
	//cout << "\n1>" << (*g).at(0) << "\n2>" <<(*g).at(1) << '\t' <<"\n3>" << (*m).at(0) << "\n4>" <<(*m).at(1) <<'\n';
	if((*g).at(0)=='0')//pierwsze 0
	{
		if((*g).at(1)=='0')//drugie 0
		{
			if ((*m).at(0)=='0') { //trzecie 0
				return true;
			}
			else
			{
				if((*m).at(0)==(*m).at(1))
				{
					return true;
				}
			}
		}
		else
		{
			if((*g).at(1)==(*m).at(1))
			{
				return true;
			}
		}
	}
	else
	{
		if((*g).at(0)==(*m).at(1)&&(*g).at(1)==(*m).at(0))
		{
			return true;
		}
	}
	return false;
}
void add(string *g, string *m)
{
	if((*m).at(1)=='9')
	{
		(*m).at(1)='0';
		if((*m).at(0)=='5')
		{
			(*m).at(0)='0';
			if((*g).at(1)=='3'&&(*g).at(0)=='2')
			{
				(*g).at(1) = '0';
				(*g).at(0) = '0';
			}
			else if((*g).at(1)=='9')
			{
				(*g).at(1) = '0';
				++(*g).at(0);

			}
			else
			{
				++(*g).at(1);
			}
		}
		else
		{
			++(*m).at(0);
		}
	}
	else
	{
		++(*m).at(1);
	}


}
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string g, m;
		getline(cin, g, ':');
		getline(cin, m);
		//cout << g << '\t' << m << '\n';
		do {
			add(&g, &m);
		} while(!is_pal(&g, &m));
		cout << g << ':' << m << '\n';

	}
	return 0;
}
