/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartos- <jmartos-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:06:43 by jmartos-          #+#    #+#             */
/*   Updated: 2023/06/05 13:34:52 by jmartos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h" /*LIBRERIA CUSTOM "jmartos-"*/

/*#Añade el nodo "new" al principio de la lista "lst". Con "**lst" nos
referimos a un puntero que apunta al puntero del primer nodo de la lista,
y "new" es el puntero del nuevo nodo que enviaremos al principio de la lista.#*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*DESARROLLO*/
/*Mientras el primer puntero al que apunta la lista no sea nulo (cosa que
significaria que la lista estaria vacia) y que el puntero de new tampoco sea
nulo, se actualiza paraque apunte el primer puntero de lista a "new"
(que es al que apunta el puntero de "lst"), y luego el primer puntero
de la lista tambien se actualiza para que apunte a "new", el nuevo primero.*/