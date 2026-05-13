/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:15:31 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 14:26:51 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

IMateriaSource::~IMateriaSource(void)
{
	std::cout << "IMateriaSource destructor's called\n";
}

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_inventaire[i] = NULL;
	std::cout << "MateriaSource constructor's called\n";
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (_inventaire[i])
			delete _inventaire[i];
	std::cout << "MateriaSource destructor's called\n";
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
	std::cout << "MateriaSource copy constructor's called\n";
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int y = 0; y < 4; y++)
			if (_inventaire[y])
			{
				delete _inventaire[y];
				_inventaire[y] = NULL;
			}
		for (int i = 0; i < 4; i++)
			if (src._inventaire[i])
				_inventaire[i] = src._inventaire[i]->clone();
	}
	std::cout << "MateriaSource assignment constructor's called\n";
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int y = 0; y < 4; y++)
	{
		if (!_inventaire[y])
		{
			_inventaire[y] = m;
			return ;
		}
	}
	std::cout << "No more available spots in the inventory\n";
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int y = 0; y < 4; y++)
	{
		if (_inventaire[y] && _inventaire[y]->getType() == type)
			return (_inventaire[y]->clone());
	}
	return NULL;
}
