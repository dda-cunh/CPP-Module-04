#include "../inc/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Brain Copy Assignement operator called" << std::endl;
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
            this->ideas[i] = rhs.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}
