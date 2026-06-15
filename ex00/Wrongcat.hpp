#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Wronganimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		std::string	getType(void) const;
		WrongCat(const WrongCat &src);
		WrongCat	&operator=(const WrongCat &src);
		void makeSound() const;
};

#endif