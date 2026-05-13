/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:16:45 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 12:53:08 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::~ICharacter(void)
{
	std::cout << "ICharcater destrcutor's called\n";
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		this->_tab_of_materias[i] = NULL;
	std::cout << "Character constructor's called\n";
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (_tab_of_materias[i])
		{
			delete _tab_of_materias[i];
			_tab_of_materias[i] = NULL;
		}
	std::cout << "Character destructor's called\n";
}

Character::Character(const Character &src)
{
	_name = src._name;
	for (int i = 0; i < 4; i++)
	{
		if (src._tab_of_materias[i])
			this->_tab_of_materias[i] = src._tab_of_materias[i]->clone();
		else
			this->_tab_of_materias[i] = NULL;
	}
	std::cout << "Character copy constructor's called\n";
}

Character	&Character::operator=(const Character &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_tab_of_materias[i])
			{
				delete this->_tab_of_materias[i];
				this->_tab_of_materias[i] = NULL;
			}
			this->_tab_of_materias[i] = src._tab_of_materias[i]->clone();
		}
	}
	_name = src._name;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int y = 0; y < 4; y++)
	{
		if (!_tab_of_materias[y])
		{
			_tab_of_materias[y] = m;
			break ;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx > 4 || idx < 0 || !_tab_of_materias[idx])
	{
		std::cout << "No item at this index...\n";
		return ;
	}
	else
		_tab_of_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 4 || idx < 0)
		return ;
	_tab_of_materias[idx]->use(target);
}