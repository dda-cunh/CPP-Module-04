#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

# include <iostream>

const std::string	RESET = "\033[0m";
const std::string	BLACK = "\033[30m";
const std::string	RED = "\033[31m";
const std::string	GREEN = "\033[32m";
const std::string	YELLOW = "\033[33m";
const std::string	BLUE = "\033[34m";
const std::string	MAGENTA = "\033[35m";
const std::string	CYAN = "\033[36m";
const std::string	WHITE = "\033[37m";

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		Animal & operator=(Animal const & rhs);
		virtual ~Animal(void);

		Animal(std::string const & newType);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		type;
};

#endif