#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include "main.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(AMateria const & src);
		AMateria & operator=(AMateria const & rhs);
		virtual ~AMateria(void);

		AMateria(std::string const & type);
		std::string const &	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			type;
};

#endif