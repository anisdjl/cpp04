/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:21:39 by adjelili          #+#    #+#             */
/*   Updated: 2026/06/15 14:26:43 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Wronganimal.hpp"
#include "Wrongcat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog *dog = new Dog();
	const WrongAnimal *wrong = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	dog->makeSound();
	wrong->makeSound();
	delete meta;
	delete i;
	delete j;
	delete wrong;
	return 0;
}
