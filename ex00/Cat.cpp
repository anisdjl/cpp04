/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:51:05 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 16:32:33 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat constructor's called\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor's called\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Meows\n";
}

std::string	Cat::getType(void) const
{
	return (_type);
}

Cat::Cat(const Cat &src) : Animal::Animal(src)
{
	_type = src._type;
	std::cout << "Cat copy constructor's called\n";
}

Cat	&Cat::operator=(const Cat &src)
{
	Animal::operator=(src);
	std::cout << "Cat assignement constructor's called\n";
	return (*this);
}