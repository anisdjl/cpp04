/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 18:03:35 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/11 16:43:26 by adjelili         ###   ########.fr       */
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
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
	std::cout << "Brain copy constructor's called\n";
}

Brain	&Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	}
	std::cout << "Brain assignement constructor's called\n";
	return (*this);
}

void	Brain::fill_brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "hello";
	return ;
}