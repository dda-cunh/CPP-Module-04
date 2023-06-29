#ifndef	CAT_HPP
# define	CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		~Cat(void);

		Cat(std::string const & newType);
		virtual void	makeSound(void) const;
		void*			getBrainAddr(void) const;
	private:
		Brain*  brain;
};

#endif