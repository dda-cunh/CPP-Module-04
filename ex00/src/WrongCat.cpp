#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "WrongCat Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(std::string const & type) : WrongAnimal(type)
{
	return ;
}
