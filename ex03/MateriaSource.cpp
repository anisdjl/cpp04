/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:15:31 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/12 18:23:07 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::~IMateriaSource(void)
{
	std::cout << "IMateriaSource destructor's called\n";
}

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource constructor's called\n";
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor's called\n";
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource copy constructor's called\n"; // ici il doit manquer des trucs
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
		*this = src;
	std::cout << "MateriaSource assignment constructor's called\n";
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *)
{

}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	
}
