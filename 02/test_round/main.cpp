#include <cmath>
#include <iostream>

int	main(void)
{
	float	f = 42.0082;
	int	n = roundf(f);
	n -= n > f;
//	f -= n;
	n = n << 8;

	for (; f != roundf(f); f*= 10)
		std::cout << "loop f = " << f
			<< "\troundf(f) = " << roundf(f) << std::endl;
	std::cout << "loop f = " << f << std::endl;
//	std::cout << "float n = " << float(n) << std::endl;
	std::cout << "int n = " << (n >> 8) << std::endl;
	std::cout << "float f = " << f << std::endl;
	std::cout << "end = " << (float)((n >> 8) + (n - ((n >> 8) << 8))) << std::endl;
/* 	float	man = roundf(f);
	if (man > f)
		man--;
	float	exp = f - man;

	while (f - (int)roundf(f))
	{
		std::cout
			<< "tmp f = " << f
			<< "\troundf = " << roundf(f)
			<< "\tf - roundf(f) = " << f - round(f)
			<< "\tround(f) % 10 = " << (int)roundf(f) % 10
			<< std::endl;
		f *= 10;
	}

	std::cout << "left: " << g << "\tright: " << f << std::endl; */
	return (0);
}
