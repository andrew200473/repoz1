

#include <iostream>

int r1()
{
	std::cout << " vvedite x ";
	int x;
	std::cin >> x;
	return x;
}

int main()
{
	int x = r1();
	std::cout << (log(abs(cos(x)))) / (log(1 + x * 2 * 2)) << std::endl;
	return 0;
}