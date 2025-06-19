/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:48:16 by akehili           #+#    #+#             */
/*   Updated: 2024/09/23 18:48:58 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	while (fact != 1)
	{
		if (fact < 1)
		{
			if (fact == 0)
			{
				return (1);
			}
			return (0);
		}
		fact--;
		nb = nb * fact;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/
