#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "WrongAnimal Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const & newType) : type(newType)
{
	std::cout << "WrongAnimal parametric constructor called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal noises *dwqidpqiwndq*" << std::endl;
	return ; 
}
