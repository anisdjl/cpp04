/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 14:33:04 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/12 15:33:45 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure constructor's called\n";
}

Cure::~Cure(void)
{
	std::cout << "Cure detructor's called\n";
}

Cure	*Cure::clone(void) const
{
	Cure *new_cure = new Cure(*this);
	return (new_cure);
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	std::cout << "Cure copy constructor's called\n";
}

Cure	&Cure::operator=(const Cure &src)
{
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}