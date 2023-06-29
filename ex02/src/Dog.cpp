#include "../inc/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const & src) : Animal(src.getType())
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Dog Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->brain = new Brain();
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog::Dog(std::string const & newType) : Animal(newType)
{
	std::cout << "Dog Parametric constructor called" << std::endl;
	this->brain = new Brain();
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOFY WOOF" << std::endl;
	return ; 
}

void*	Dog::getBrainAddr(void) const
{
	return ((void*)&this->brain);
}
