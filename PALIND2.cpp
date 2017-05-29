#include <iostream>

using namespace std;
bool is_pal(string sprawdzana)
{
  int dlugosc = sprawdzana.length();
  for (int i = 0, j = dlugosc-1; i < dlugosc; i++)
  {
      //cout << sprawdzana[i] << '\t' << sprawdzana[j];
      if(sprawdzana[i]!=sprawdzana[j])
      {
        return false;
      }
      j--;
  }
  return true;
}


int main(int argc,  char** argv)
{
	int t;
	cin >> t;
	while (t--)
	{
		string txt;
		cin >> txt;
		if(is_pal(txt))
		{
			cout << "tak" << '\n';
		}
		else
		{
			cout << "nie" << '\n';
		}
	}
  return 0;
}
