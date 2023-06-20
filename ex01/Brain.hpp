#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain operator=(Brain const &src);
		Brain(Brain const &rhs);
		~Brain();

		std::string getIdea(int index);
		std::string setIdea(int index);

};

Brain::Brain(){}

Brain::~Brain(){}

std::string Brain::getIdea(int index)
{
	if (index >= 0 && index <= 100)
	{
		return (this->_ideas)[index];

	}

}



#endif