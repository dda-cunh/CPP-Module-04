#include "../inc/Character.hpp"

Character::Character(void) : name("Default"), slot00(NULL), slot01(NULL), slot02(NULL), slot03(NULL)
{
	std::cout << RED << "Character Default constructor called" << RESET << std::endl;
	return ;
}

Character::Character(Character const & src)
{
	std::cout << RED << "Character Copy constructor called" << RESET << std::endl;
	this->cleanSlots();
	this->name = src.getName();
	this->slot00 = src.slot00->clone();
	this->slot01 = src.slot01->clone();
	this->slot02 = src.slot02->clone();
	this->slot03 = src.slot03->clone();
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	std::cout << RED << "Character Copy Assignement operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		this->cleanSlots();
		this->name = rhs.getName();
		this->slot00 = rhs.slot00->clone();
		this->slot01 = rhs.slot01->clone();
		this->slot02 = rhs.slot02->clone();
		this->slot03 = rhs.slot03->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << RED << "Character Destructor called" << RESET << std::endl;
	this->cleanSlots();
	return ;
}

Character::Character(std::string newName) : name(newName), slot00(NULL), slot01(NULL), slot02(NULL), slot03(NULL)
{
	std::cout << RED << "Character parametric constructor called" << RESET << std::endl;
	return ;
}

std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (slot00 == NULL)
		this->slot00 = m;
	if (slot01 == NULL)
		this->slot01 = m;
	if (slot02 == NULL)
		this->slot02 = m;
	if (slot03 == NULL)
		this->slot03 = m;
	return ;
}

void	Character::unequip(int idx)
{
	switch (idx)
	{
		case 0:
		{
			this->slot00 = NULL;
			break ;
		}
		case 1:
		{
			this->slot01 = NULL;
			break ;
		}
		case 2:
		{
			this->slot02 = NULL;
			break ;
		}
		case 3:
		{
			this->slot03 = NULL;
			break ;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	switch (idx)
	{
		case 0:
		{
			this->slot00->use(target);
			break ;
		}
		case 1:
		{
			this->slot01->use(target);
			break ;
		}
		case 2:
		{
			this->slot02->use(target);
			break ;
		}
		case 3:
		{
			this->slot03->use(target);
			break ;
		}
	}
}

void	Character::cleanSlots()
{
	if (this->slot00)
	{
		delete this->slot00;
		this->slot00 = NULL;
	}
	if (this->slot01)
	{
		delete this->slot01;
		this->slot01 = NULL;
	}
	if (this->slot02)
	{
		delete this->slot02;
		this->slot02 = NULL;
	}
	if (this->slot03)
	{
		delete this->slot03;
		this->slot03 = NULL;
	}
}
