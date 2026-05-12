/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 14:33:25 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/12 15:34:35 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor's called\n";
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor's called\n";
}

Ice	*Ice::clone(void) const
{
	Ice	*new_ice = new Ice(*this);
	return (new_ice);
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << "Ice copy constructor's called\n";
}

Ice &Ice::operator=(const Ice &src)
{
	if (this != &src)
		AMateria::operator=(src);
	return (*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}