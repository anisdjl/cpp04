/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 18:03:35 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 18:27:11 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor's called\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor's called\n";
}

Brain::Brain(const Brain &src)
{
	_ideas[100] = src._ideas[100];
	std::cout << "Brain copy constructor's called\n";
}

Brain	&Brain::operator=(const Brain &src)
{
	if (this != &src)
		_ideas[100] = src._ideas[100];
	std::cout << "Brain assignement constructor's called\n";
	return (*this);
}
