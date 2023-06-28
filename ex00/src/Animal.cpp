#include "../inc/Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Animal Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal::Animal(std::string const & type) : type(type)
{
	std::cout << "Animal parametric constructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal noises *dwqidpqiwndq*" << std::endl;
	return ; 
}
