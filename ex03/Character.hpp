/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:16:08 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 12:20:44 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter(void);
		virtual std::string const &getName() const = 0;
		virtual void	equip(AMateria *m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual void	use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter
{
	protected:
		AMateria *_tab_of_materias[4];
		std::string _name;
	public:
		Character(std::string name);
		~Character(void);
		Character(const Character &src);
		Character &operator=(const Character &src);
		void	equip(AMateria *m);
		void	unequip(int idx);
		std::string	const &getName(void) const;
		void	use(int idx, ICharacter &target);
};

#endif