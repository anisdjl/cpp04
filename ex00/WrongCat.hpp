#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

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