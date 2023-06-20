#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string const type);
		Animal& operator=(Animal const &rhs);
		Animal(Animal const &src);
		~Animal();

		std::string getType() const;

	protected :
		std::string _type;
};

#endif