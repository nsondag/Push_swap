/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsondag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 22:04:41 by nsondag           #+#    #+#             */
/*   Updated: 2018/12/01 21:45:28 by nsondag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	revrot(t_stack *stack)
{
	int	last;
	int i;

	if (stack->len)
	{
		i = stack->len;
		last = stack->tab[stack->len - 1];
		right_shift(stack);
		stack->tab[0] = last;
	}
}

void		revrot_a(t_stack *a, int w)
{
	revrot(a);
	if (w)
		write(1, "rra\n", 4);
}

void		revrot_b(t_stack *b, int w)
{
	revrot(b);
	if (w)
		write(1, "rrb\n", 4);
}

void		revrot_ab(t_stack *a, t_stack *b, int w)
{
	revrot(a);
	revrot(b);
	if (w)
		write(1, "rrr\n", 4);
}
