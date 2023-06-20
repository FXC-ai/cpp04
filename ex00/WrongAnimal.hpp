#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string const type);
		WrongAnimal& operator=(WrongAnimal const &rhs);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();

		std::string		getType() const;
		virtual void	makeSound() const;

	protected :
		std::string _type;
};

#endif