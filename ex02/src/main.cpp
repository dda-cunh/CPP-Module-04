#include "../inc/main.hpp"

#define N 4

int main(void)
{
	Animal	*animals[N];

	std::cout << GREEN;
	for (int i = 0; i < N; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << RED;
	for (int i = 0; i < N; i++)
		delete animals[i];
	std::cout << RESET;
	std::cout << MAGENTA << "Deep copy checks:	" << RESET << std::endl;
	{
		Dog	a;
		Dog b(a);
	
		std::cout << "Original:\t" << &a << std::endl;
		std::cout << "Copy:\t\t" << &b << std::endl;
		std::cout << "Original Brain:\t" << a.getBrainAddr() << std::endl;
		std::cout << "Copy Brain:\t" << b.getBrainAddr() << std::endl;
	}
	return 0;
}