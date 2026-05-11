/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:23:11 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 16:19:51 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	_type = "Animal";
	std::cout << "Animal constructor's called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor's called\n";
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makes sound\n";
}

std::string	Animal::getType(void) const
{
	return (_type);
}

Animal::Animal(const Animal &src)
{
	_type = src._type;
	std::cout << "Animal copy constructor's called\n";
}

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
		_type = src._type;
	std::cout << "Animal assignment constructor's called\n";
	return (*this);
}