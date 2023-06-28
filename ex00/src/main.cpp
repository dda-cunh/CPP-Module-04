#include "../inc/WrongAnimal.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"

template<typename T>
void test(T & obj)
{
	std::cout << "TYPE\t" << obj->getType() << " " << std::endl;
	std::cout << GREEN;
	obj->makeSound();
	std::cout << RESET;
}


int main(void)
{
	int	i = 1;

	std::cout << CYAN + "TEST " << i++;
	std::cout << RESET << std::endl << std::endl;
	{
		std::cout << RED;
		const Animal*	animal_animal = new Animal();
		const Animal*	animal_dog = new Dog();
		const Animal*	animal_cat = new Cat();
		std::cout << RESET;

		test(animal_animal);
		test(animal_dog);
		test(animal_cat);
		std::cout << RED;
		delete animal_cat;
		delete animal_dog;
		delete animal_animal;
		std::cout << RESET;
	}
	std::cout << CYAN + "TEST " << i++;
	std::cout << RESET << std::endl << std::endl;
	{
		std::cout << RED;
		const WrongAnimal*	wanimal_Wanimal = new WrongAnimal();
		const WrongCat*		wcat_wact = new WrongCat();
		const WrongAnimal*	wanimal_wcat = new WrongCat();
		std::cout << RESET;

		test(wanimal_Wanimal);
		test(wcat_wact);
		test(wanimal_wcat);
		std::cout << RED;
		delete wanimal_wcat;
		delete wcat_wact;
		delete wanimal_Wanimal;
		std::cout << RESET;
	}
	std::cout << CYAN + "TEST " << i++;
	std::cout << RESET << std::endl << std::endl;
	{
		std::cout << RED;
		const WrongAnimal*	wanimal_Wanimal = new WrongAnimal();
		const Dog*			dog_dog = new Dog();
		const WrongAnimal*	wanimal_wcat = new WrongCat();
		std::cout << RESET;

		test(wanimal_Wanimal);
		test(dog_dog);
		test(wanimal_wcat);
		std::cout << RED;
		delete wanimal_wcat;
		delete dog_dog;
		delete wanimal_Wanimal;
		std::cout << RESET;
	}
	return 0;
}