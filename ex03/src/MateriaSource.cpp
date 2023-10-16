#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource(void) : materia00(NULL), materia01(NULL), materia02(NULL), materia03(NULL)
{
	std::cout << RED << "MateriaSource Default constructor called" << RESET << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src) : materia00(src.materia00->clone()), materia01(src.materia01->clone()),
		materia02(src.materia02->clone()), materia03(src.materia03->clone())
{
	std::cout << RED << "MateriaSource Copy constructor called" << RESET << std::endl;
	return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << RED << "MateriaSource Copy Assignement operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		this->materia00 = rhs.materia00->clone();
		this->materia01 = rhs.materia01->clone();
		this->materia02 = rhs.materia02->clone();
		this->materia03 = rhs.materia03->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << RED << "MateriaSource Destructor called" << RESET << std::endl;
	if (materia00)
		delete (materia00);
	if (materia01)
		delete (materia01);
	if (materia02)
		delete (materia02);
	if (materia03)
		delete (materia03);
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (materia00->getType() == type)
		return (materia00->clone());
	if (materia01->getType() == type)
		return (materia01->clone());
	if (materia02->getType() == type)
		return (materia02->clone());
	if (materia03->getType() == type)
		return (materia03->clone());
	return (0);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (materia00 == NULL)
	{
		materia00 = m;
		return ;
	}
	if (materia01 == NULL)
	{
		materia01 = m;
		return ;
	}
	if (materia02 == NULL)
	{
		materia02 = m;
		return ;
	}
	if (materia03 == NULL)
	{
		materia03 = m;
		return ;
	}
	return ;
}
