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
	
	int i = 0;
	while (++i < av.length())
	{
		if (av[i] == av[i - 1])
			cout << '0';
		else
			cout << '1';
	}
	return (0);
}