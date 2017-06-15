#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int d;
	cin >> d;
	while (d--)
	{
		int n;
		cin >> n;
		int kierunek, kroki;
		int polnoc = 0;
		int poludnie = 0;
		int zachod = 0;
		int wschod = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> kierunek >> kroki;
			switch (kierunek)
			{
				case 0:
					polnoc+=kroki;
					break;
				case 1:
					poludnie+=kroki;
					break;
				case 2:
					zachod+=kroki;
					break;
				case 3:
					wschod+=kroki;
					break;
			}
		}
		if(polnoc == poludnie && poludnie == zachod && zachod == wschod)
		{
				cout << "studnia" << '\n';
		}
		else
		{
			if (polnoc > poludnie)
			{
				cout << 0 << ' ' << polnoc-poludnie << '\n';
			}
			else if (poludnie > polnoc)
			{
				cout << 1 << ' ' << poludnie-polnoc << '\n';
			}
			if (zachod > wschod)
			{
				cout << 2 << ' ' << zachod-wschod << '\n';
			}
			else if (wschod > zachod)
			{
				cout << 3 << ' ' << wschod-zachod << '\n';
			}
		}
	}
	return 0;
}
