#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
#include <cstdio>

int main(int ac, char **av)
{
	int i;
   	i = 1;
	if (ac > 1)
	{
		int x = 0;
		while (av[i][x])
		{
			//std:: cout << &av[1][i];
			std::cout << char(toupper(av[i][x++]));
		}
	}
	//std::string mystring;
	//mystring = &av[1][i];
	//std::cout << char(toupper(mystring));
	//i++;
	//std::cout << mystring;

	return 0;

}
