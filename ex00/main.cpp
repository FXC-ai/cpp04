#include "Animal.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	Animal test("Jean Pascal");

	Animal copyMeta(*meta);

	std::cout << "copyMeta.getType() = " << copyMeta.getType() << std::endl;

	Dog Pilou;


	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); 
	// j->makeSound();
	// meta->makeSound();

	delete meta;
	
	return 0;
}