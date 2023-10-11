#include "../inc/AMateria.hpp"

AMateria::AMateria(void) : type("AMateria")
{
	std::cout << "AMateria Default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	return ;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & newType) : type(newType)
{
	std::cout << "AMateria Parametric constructor called" << std::endl;
	return ;
}

void	AMateria::use(ICharacter & target)
{
	if (this->type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at <name> *";
	else if (this->type.compare("cure") == 0)
		std::cout << "* heals <name>’s wounds *";
	else
		std::cout << "* bad use *";
	std::cout << std::endl;
	return ;
}