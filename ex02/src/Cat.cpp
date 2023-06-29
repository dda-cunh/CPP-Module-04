#include "../inc/Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Cat::Cat(Cat const & src) : Animal(src.getType())
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Cat Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain();
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Cat::Cat(std::string const & newType) : Animal(newType)
{
	std::cout << "Cat Parametric constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "mEOwy :3" << std::endl;
	return ; 
}

void*	Cat::getBrainAddr(void) const
{
	return ((void *)&this->brain);
}
