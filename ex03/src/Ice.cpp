#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria(src.getType())
{
	std::cout << "Ice Copy constructor called" << std::endl;
	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
	return ;
}

Ice::Ice(std::string const & newType) : AMateria(newType)
{
	std::cout << "Ice Parametric constructor called" << std::endl;
	return ;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice(this->type));
}
