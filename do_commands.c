/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:33:22 by shovsepy          #+#    #+#             */
/*   Updated: 2023/03/21 18:18:16 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	do_commands(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "sa")))
	{
		swap(stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "sb")))
	{
		swap(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "ss")))
	{
		swap(stack_a);
		swap(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "pa")))
	{
		push(stack_a, stack_b);
		return (0);
	}
	return (1);
}

int	do_commands_2(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "pb")))
	{
		push(stack_b, stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "ra")))
	{
		rotate(stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "rb")))
	{
		rotate(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "rr")))
	{
		rotate(stack_a);
		rotate(stack_b);
		return (0);
	}
	return (1);
}

int	do_commands_3(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "rra")))
	{
		reverse_rotate(stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "rrb")))
	{
		reverse_rotate(stack_b);
		return (0);
	}	
	if (!(ft_strcmp(line, "rrr")))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		return (0);
	}
	return (1);
}
