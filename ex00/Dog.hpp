#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog& operator=(Dog const &rhs);
		Dog(Dog const &src);
		~Dog();
	
};

#endif