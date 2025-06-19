/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:52:13 by akehili           #+#    #+#             */
/*   Updated: 2024/09/22 21:24:31 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9 && nb != -2147483648)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10 && nb != -2147483648)
		ft_putchar(nb + 48);
}
/*
int main(void)
{
    ft_putnbr(42);           // Affiche 42
    ft_putchar('\n');        // Retour à la ligne

    ft_putnbr(-12345);       // Affiche -12345
    ft_putchar('\n');        // Retour à la ligne

    ft_putnbr(2147483647);   // Affiche 2147483647 (valeur maximale d'un int)
    ft_putchar('\n');        // Retour à la ligne

    ft_putnbr(-2147483648);  // Affiche -2147483648 (valeur minimale d'un int)
    ft_putchar('\n');        // Retour à la ligne

    return 0;
}
*/
