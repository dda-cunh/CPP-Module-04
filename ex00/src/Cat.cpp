#include "../inc/Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat::Cat(std::string const & newType) : Animal(newType)
{
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "mEOwy :3" << std::endl;
	return ; 
}
