/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anis <anis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:21:39 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/11 23:09:49 by anis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Wronganimal.hpp"

int main(void)
{
	//Animal test = Animal();
	Animal *animal_tab[10];

	for (int i = 0; i < 5; i++)
		animal_tab[i] = new Dog();
	for (int y = 5; y < 10; y++)
		animal_tab[y] = new Cat();
	for (int a = 0; a < 10; a++)
		delete animal_tab[a];
	// Dog basic;
    // {
    //     Dog tmp = basic;
    // }
	return 0;
}
