#include "../inc/ICharacter.hpp"
#include "../inc/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << RED << "Cure Default constructor called" << RESET << std::endl;
	return ;
}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	std::cout << RED << "Cure Copy constructor called" << RESET << std::endl;
	this->type = src.type;
	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	std::cout << RED << "Cure Copy Assignement operator called" << RESET << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << RED << "Cure Destructor called" << RESET << std::endl;
	return ;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
	return ;
}
