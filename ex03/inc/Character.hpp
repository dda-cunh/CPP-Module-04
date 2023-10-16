#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		virtual ~Character(void);

		Character(std::string newName);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		void		cleanSlots(void);

		std::string	name;
		AMateria	*slot00;
		AMateria	*slot01;
		AMateria	*slot02;
		AMateria	*slot03;

};

#endif