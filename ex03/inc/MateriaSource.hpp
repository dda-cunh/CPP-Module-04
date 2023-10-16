#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		MateriaSource & operator=(MateriaSource const & rhs);
		~MateriaSource(void);

		AMateria*	createMateria(std::string const & type);
		void		learnMateria(AMateria*);

	private:
		AMateria	*materia00;
		AMateria	*materia01;
		AMateria	*materia02;
		AMateria	*materia03;
};

#endif