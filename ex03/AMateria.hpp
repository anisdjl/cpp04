/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:47:52 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/12 15:35:23 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria(void);
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);
		std::string	const &getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void	use(ICharacter &target);
};

class Ice : public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);
		Ice	*clone(void) const;
		void	use(ICharacter &target);
};

class Cure : public AMateria
{
	public:
		Cure(void);
		~Cure(void);
		Cure &operator=(const Cure &src);
		Cure(const Cure &src);
		Cure *clone (void) const;
		void	use(ICharacter &target);
};

#endif