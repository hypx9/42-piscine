/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:23:36 by akehili           #+#    #+#             */
/*   Updated: 2024/09/24 17:32:08 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while (result * result < nb && result < nb / 2)
		result++;
	if (result * result == nb)
		return (result);
	return (0);
}
/*
int	main(void)
{
    int number = 16;
    int sqrt_result = ft_sqrt(number);
    printf("The square root of %d is %d\n", number, sqrt_result);
    return (0);
}
*/
