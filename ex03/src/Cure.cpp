#include "../inc/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
	return ;
}

Cure::Cure(Cure const & src) : AMateria(src.getType())
{
	std::cout << "Cure Copy constructor called" << std::endl;
	return ;
}

Cure & Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure Destructor called" << std::endl;
	return ;
}

Cure::Cure(std::string const & newType) : AMateria(newType)
{
	std::cout << "Cure Parametric constructor called" << std::endl;
	return ;
}

AMateria*	Cure::clone(void) const
{
	return (new Cure(this->type));
}
