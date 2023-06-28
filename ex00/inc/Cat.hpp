#ifndef	CAT_HPP
# define	CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat(void);

		Cat(std::string const & type);
		virtual void	makeSound(void) const;
};

#endif