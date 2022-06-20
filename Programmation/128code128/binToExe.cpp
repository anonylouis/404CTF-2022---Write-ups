#include <ctype.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

int	main(int argc, char **argv)
{	
	std::ifstream fd_in(argv[1]);
	string av;
	getline(fd_in, av);
	int i = av.length();
	int j = 0;
	while (i >= 8)
	{
		int c = 0;
		for (int k = 0; k < 8; k++)
		{
			if (av[j + k] == '1')
				c += pow(2, 7 - k);
		}
		cout << (char) c;
		j+=8;
		i-=8;
	}
	return (0);
}