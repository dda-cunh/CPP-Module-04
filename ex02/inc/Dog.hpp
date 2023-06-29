#ifndef	DOG_HPP
# define	DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		Dog & operator=(Dog const & rhs);
		~Dog(void);

		Dog(std::string const & newType);
		virtual void	makeSound(void) const;
		void*			getBrainAddr(void) const;
	private:
		Brain*  brain;
};

#endif