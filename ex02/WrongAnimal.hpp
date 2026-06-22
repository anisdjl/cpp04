/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:40:42 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 17:56:07 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string _type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);
		void makeSound() const;
		std::string getType() const;
};

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