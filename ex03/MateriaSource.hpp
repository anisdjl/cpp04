/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:17:07 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/13 12:11:09 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource();
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_inventaire[4];
	public:
		MateriaSource(void);
		~MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &src);
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif