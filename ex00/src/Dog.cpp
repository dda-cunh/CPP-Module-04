#include "../inc/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

Dog::Dog(std::string const & newType) : Animal(newType)
{
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOFY WOOF" << std::endl;
	return ; 
}
