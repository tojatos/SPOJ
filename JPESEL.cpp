#include <iostream>
using namespace std;
bool is_valid_pesel(char*);
int main()
{
    int t;
    cin >> t; /* wczytaj liczbę testów */
		char** pesels = new char*[t];
		for (int i = 0; i < t; i++)
		{
			char* pesel = new char[11];
			cin >> pesel;
			pesels[i] = pesel;
		}
		for (int i = 0; i < t; i++)
		{
			if(is_valid_pesel(pesels[i]))
			{
				std::cout << "D" << '\n';
			}
			else
			{
				std::cout << "N" << '\n';
			}
		}
    return 0;
}
bool is_valid_pesel(char* pesel)
{
	int sum = 0;
	sum += pesel[0] * 1;
	sum += pesel[1] * 3;
	sum += pesel[2] * 7;
	sum += pesel[3] * 9;
	sum += pesel[4] * 1;
	sum += pesel[5] * 3;
	sum += pesel[6] * 7;
	sum += pesel[7] * 9;
	sum += pesel[8] * 1;
	sum += pesel[9] * 3;
	sum += pesel[10] * 1;
	if(sum%10==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
