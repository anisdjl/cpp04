/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:23:21 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/09 16:57:10 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		virtual void	makeSound(void) const;
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual std::string	getType(void) const;
};

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &src);
		Dog	&operator=(const Dog &src);
		void makeSound(void) const;
		std::string	getType(void) const;
};

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &src);
		Cat	&operator=(const Cat &src);
		void makeSound(void) const;
		std::string	getType(void) const;
};

#endif