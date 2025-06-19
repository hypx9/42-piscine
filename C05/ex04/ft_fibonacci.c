/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:49:59 by akehili           #+#    #+#             */
/*   Updated: 2024/09/24 17:31:45 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	index;
	
	index = 5;
	printf("Fibonacci %d = %d\n", index, ft_fibonacci(index));

	index = 7;
	printf("Fibonacci %d = %d\n", index, ft_fibonacci(index));
}
*/
