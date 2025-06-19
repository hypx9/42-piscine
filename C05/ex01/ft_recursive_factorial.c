/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:53:06 by akehili           #+#    #+#             */
/*   Updated: 2024/09/23 21:05:37 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("Le factoriel de %d est : %d\n", nb, ft_recursive_factorial(nb));

	nb = -3;
	printf("Le factoriel de %d est : %d\n", nb, ft_recursive_factorial(nb));

	nb = 0;
	printf("Le factoriel de %d est : %d\n", nb, ft_recursive_factorial(nb));

    return (0);
}
*/
