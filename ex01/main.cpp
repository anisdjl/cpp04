/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjelili <adjelili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 15:21:39 by adjelili          #+#    #+#             */
/*   Updated: 2026/05/11 16:55:13 by adjelili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Wronganimal.hpp"

int main(void)
{
	Animal *animal_tab[10];

	for (int i = 0; i < 5; i++)
		animal_tab[i] = new Dog();
	for (int y = 5; y < 10; y++)
		animal_tab[y] = new Cat();
	for (int a = 0; a < 10; a++)
		delete animal_tab[a];
	return 0;
}

// int main()
// {
//     Dog basic;
// 	{
// 		Dog tmp = basic;
// 	}

// 	std::cout << "Le chien de base est-il toujours vivant ?" << std::endl;
// 	basic.makeSound(); 
// 	return 0;
// }
