/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevlar <kevlar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:31:30 by kevlar            #+#    #+#             */
/*   Updated: 2024/03/06 19:24:15 by kevlar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*s;

	s = NULL;
	s = malloc(1 * sizeof(s));
	if (s == NULL)
		exit(1);
	check_args(ac, av);	
	init_stacks(argc, argv, s);
	join_args(argc, argv, s);
	analize_numbers(s);
	sorted_or_duplicates(s);
	create_index(s);
	//
	if (s->a_size == 2 && s->a[0] > s->a[1])
		swap("sa", s->a, s->a_size);
	else if (s->a_size == 3)
		sort_three_elements(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_four_to_five_elements(s);
	else
		radix_sort(s);
	//
	sorted_or_duplicates(s);
	free_and_exit_with_message(s, "Error\n");
	return (0);
}

/*
Pseudocódigo:
********************************************************************************

*/