/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:11:18 by akehili           #+#    #+#             */
/*   Updated: 2024/09/22 21:09:34 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb3(char a1, char a2, char b1, char b2)
{
	if (!(a1 == '9' && a2 == '8' && b1 == '9' && b2 == '9'))
		write(1, ", ", 2);
}

void	ft_display_comb(char a1, char a2, char b1, char b2)
{
	write (1, &a1, 1);
	write (1, &a2, 1);
	write (1, " ", 1);
	write (1, &b1, 1);
	write (1, &b2, 1);
	ft_print_comb3(a1, a2, b1, b2);
}

void	ft_handle_b2(char a1, char a2, char b1)
{
	char	b2;

	if (b1 == a1)
		b2 = a2 + 1;
	else
		b2 = '0';
	while (b2 <= '9')
	{
		ft_display_comb(a1, a2, b1, b2);
		b2++;
	}
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;

	a1 = '0';
	while (a1 <= '9')
	{
		a2 = '0';
		while (a2 <= '9')
		{
			b1 = a1;
			while (b1 <= '9')
			{
				ft_handle_b2(a1, a2, b1);
				b1++;
			}
			a2++;
		}
		a1++;
	}
}
/*
int main(void)
{
    ft_print_comb2();
    return (0);
}

int	main(void)
{
	ft_print_comb2();
	write (1, "\n", 1);
	return (0);
}
*/
