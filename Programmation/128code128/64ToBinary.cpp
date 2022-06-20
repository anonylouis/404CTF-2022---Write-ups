#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	main(int argc, char **argv)
{
	string base("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	string bin("");
	string av(argv[1]);

	int i = -1;
	while(++i < av.length())
	{
		char p = av[i];
		//Homoglyph
		if ((int) av[i] == -48 && (int) av[i+1] == -94)
		{
			p = 'T';
			i++;
		}
		else if ((int) av[i] == -47 && (int) av[i+1] == -127)
		{
			p = 'c';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -75)
		{
			p = 'e';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -112)
		{
			p = 'A';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -110)
		{
			p = 'B';
			i++;
		}
		else if ((int) av[i] == -47 && (int) av[i+1] == -123)
		{
			p = 'x';
			i++;
		}
		else if ((int) av[i] == -47 && (int) av[i+1] == -128)
		{
			p = 'p';
			i++;
		}
		else if ((int) av[i] == -47 && (int) av[i+1] == -125)
		{
			p = 'y';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -99)
		{
			p = 'H';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -102)
		{
			p = 'K';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -80)
		{
			p = 'a';
			i++;
		}
		else if ((int) av[i] == -48 && (int) av[i+1] == -66)
		{
			p = 'o';
			i++;
		}

		int c = base.find(p, 0);
		if (c != string::npos)
		{
			int j = -1;
			string temp("");
			
			while(++j < 6)
			{
				if (c%2 == 0)
					temp += "0";
				else
					temp += "1";
				c/=2;
			}
			reverse(temp.begin(), temp.end());
			bin += temp;
		}
	}
	//Each line should be convertible in ascii
	bin.erase(bin.end() - (bin.length() % 8), bin.end());

	cout << bin;
	return (0);
}