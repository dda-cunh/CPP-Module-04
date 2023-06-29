#ifndef	Brain_HPP
# define	Brain_HPP

# include "Animal.hpp"

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		Brain & operator=(Brain const & rhs);
		~Brain(void);

		std::string		ideas[100];
};

#endif