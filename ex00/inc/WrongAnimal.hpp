#ifndef	WRONGANIMAL_HPP
# define	WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal & operator=(WrongAnimal const & rhs);
		virtual ~WrongAnimal(void);

		WrongAnimal(std::string const & newType);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		type;
};

#endif