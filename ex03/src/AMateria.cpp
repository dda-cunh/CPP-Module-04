#include "../inc/ICharacter.hpp"
#include "../inc/AMateria.hpp"

AMateria::AMateria(void) : type("AMateria")
{
	std::cout << RED << "AMateria Default constructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << RED << "AMateria Copy constructor called" << RESET << std::endl;
	(void) src;
	return ;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << RED << "AMateria Copy Assignement operator called" << RESET << std::endl;
	(void)	rhs;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << RED << "AMateria Destructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(std::string const & newType) : type(newType)
{
	std::cout << RED << "AMateria Parametric constructor called" << RESET << std::endl;
	return ;
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "* " << this->type << " used on " << target.getName() << " *" << std::endl;
	return ;
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}
