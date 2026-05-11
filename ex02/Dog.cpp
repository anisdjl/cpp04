/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:50:32 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/11 16:05:45 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	_brain_dog = new Brain();
	std::cout << "Dog constructor's called\n";
}

Dog::~Dog(void)
{
	delete this->_brain_dog;
	std::cout << "Dog destructor's called\n";	
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog barks\n";
}

std::string	Dog::getType(void) const
{
	return (_type);	
}

Dog::Dog(const Dog &src) : Animal::Animal(src)
{
	_type = src._type;
	_brain_dog = new Brain();
	*(_brain_dog) = *(src._brain_dog);
	std::cout << "Dog copy constructor's called\n";
}

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		Animal::operator=(src);
		*(_brain_dog) = *(src._brain_dog);
	}
	std::cout << "Dog assignement constructor's called\n";
	return (*this);
}
