#include "../inc/ICharacter.hpp"
#include "../inc/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << RED << "Ice Default constructor called" << RESET << std::endl;
	return ;
}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	std::cout << RED << "Ice Copy constructor called" << RESET << std::endl;
	this->type = src.type;
	return ;
}

Ice & Ice::operator=(Ice const & rhs)
{
	std::cout << RED << "Ice Copy Assignement operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << RED << "Ice Destructor called" << RESET << std::endl;
	return ;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
	return ;
}
