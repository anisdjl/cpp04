/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:51:05 by adjelili          #+#    #+#             */
/*   Updated: 2026/06/22 15:29:34 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	_brain_cat = new Brain();
	std::cout << "Cat constructor's called\n";
}

Cat::~Cat(void)
{
	delete this->_brain_cat;
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
	if (src._brain_cat)
	{
		_brain_cat = new Brain();
		*(_brain_cat) = *(src._brain_cat);
	}
	else
		_brain_cat = NULL;
	std::cout << "Cat copy constructor's called\n";
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		Animal::operator=(src);
		delete _brain_cat;
		_brain_cat = NULL;
		if (src._brain_cat)
		{
			_brain_cat = new Brain();
			*(_brain_cat) = *(src._brain_cat);
		}
	}
	std::cout << "Cat assignement constructor's called\n";
	return (*this);
}