/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:09:25 by jmartos-          #+#    #+#             */
/*   Updated: 2024/08/29 20:28:58 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		/* Atributos privados. */
		std::string	_type;
	public:
		/* Constructores y destructor. */
		Animal();
		Animal(std::string type_);
		Animal(const Animal &copy_);
		virtual	~Animal();
		/* Operador de copia. */
		Animal &operator=(const Animal &copy_);
		/* Funciones de clase. */
		std::string const	&getType(void) const;
		virtual void 				makeSound(void) const;
		virtual Brain &getBrain(void) const = 0;
};
