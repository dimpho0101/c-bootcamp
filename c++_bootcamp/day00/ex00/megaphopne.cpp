#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i;
  i = 1;

		while (i < ac)
		{
			int x = 0;
			//std:: cout << &av[1][i];
			while (av[i][x])
      {
				std::cout << char(toupper(av[i][x++]));
      }
      i++;
		}
	if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	//std::string mystring;
	//mystring = &av[1][i];
	//std::cout << char(toupper(mystring));
	//i++;
	std::cout << std::endl;

	return 0;

}
