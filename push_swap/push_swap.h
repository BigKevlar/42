/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:32:16 by kevlar            #+#    #+#             */
/*   Updated: 2024/03/01 12:36:21 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/includes/libft.h" /* Libreria 42 jmartos- */
# include <stdlib.h> /* malloc y free */
# include <stdbool.h> /* Para imprimir los nombres de las funciones */
# include <limits.h> /* INT_MIN y INT_MAX */

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int size_b;
}		t_stack;

/**********************/
/* ERRORES (errors.c) */
/**********************/

void	args_error(void);

/****************************/
/* COMPROBACIONES (check.c) */
/****************************/

int		is_number(char *numbers);
int		is_duplicate(char **numbers);
char	**validation(int ac, char **av);

/************************/
/* CREAR STACK (init.c) */
/************************/

t_stack	create_stack_a(int number);

/************************/
/* CREAR NODOS (init.c) */
/************************/

/**************************/
/* ORDENAR STACK (init.c) */
/**************************/

/*********************/
/* ACCIONES (init.c) */
/*********************/

static void	 swap(t_stack **head);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

/******************************/
/* FUNCIONES VARIAS (utils.c) */
/******************************/



#endif