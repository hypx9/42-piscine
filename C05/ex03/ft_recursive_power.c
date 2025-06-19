/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:43:37 by akehili           #+#    #+#             */
/*   Updated: 2024/09/24 17:33:00 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power -1));
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 3;
	power = 3;
	result = ft_recursive_power(nb, power);
	printf("%d %d = %d\n", nb, power, result);
}
*/
