/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:32:16 by kevlar            #+#    #+#             */
/*   Updated: 2024/02/18 20:08:55 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/includes/libft.h" /* Libreria 42 jmartos- */
# include <stdlib.h> /* malloc */

typedef struct s_stack
{
	int				num;
	struct s_stack	*prev;
	struct s_stack	*next;
} t_stack;

/*
typedef struct s_stack_test
{
	char				**str;
	t_list *a;
	t_list *b;
} t_stack_test;

typedef struct s_int
{
	long value;
	
} t_int;
*/
#endif