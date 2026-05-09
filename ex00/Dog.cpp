/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:50:32 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 16:32:55 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "Dog constructor's called\n";
}

Dog::~Dog(void)
{
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
	std::cout << "Dog copy constructor's called\n";
}

Dog	&Dog::operator=(const Dog &src)
{
	Animal::operator=(src);
	std::cout << "Dog assignement constructor's called\n";
	return (*this);
}
