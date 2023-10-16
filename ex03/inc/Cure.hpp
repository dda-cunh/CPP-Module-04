#ifndef	Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src);
		Cure & operator=(Cure const & rhs);
		~Cure(void);

		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif