/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:41:59 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 17:45:01 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "WrongAnimal";
	std::cout << "WrongAnimal constructor's called\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor's called\n";
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes sound\n";
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	_type = src._type;
	std::cout << "WrongAnimal copy constructor's called\n";
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		_type = src._type;
	std::cout << "Animal assignment constructor's called\n";
	return (*this);
}

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << "WrongCat constructor's called\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor's called\n";
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Meows\n";
}

std::string	WrongCat::getType(void) const
{
	return (_type);
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal::WrongAnimal(src)
{
	_type = src._type;
	std::cout << "WrongCat copy constructor's called\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	WrongAnimal::operator=(src);
	std::cout << "WrongCat assignement constructor's called\n";
	return (*this);
}
