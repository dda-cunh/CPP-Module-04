#ifndef	Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src);
		Cure & operator=(Cure const & rhs);
		virtual ~Cure(void);

		Cure(std::string const & type);
		virtual AMateria*	clone() const;
};

#endif