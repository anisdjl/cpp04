/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:47:45 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 12:26:53 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
	std::cout << "Materia constructor's called\n";
}

AMateria::~AMateria(void)
{
	std::cout << "Materia destructor's called\n";
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Materia shoots a materia at " << target.getName() << std::endl;
}

std::string	const &AMateria::getType(void) const
{
	return (_type);
}

AMateria::AMateria(const AMateria &src)
{
	_type = src._type;
	std::cout << "Materia copy constructor called\n";
}

AMateria	&AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		_type = src._type;
	return (*this);
}