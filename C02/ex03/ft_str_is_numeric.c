/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:11:07 by akehili           #+#    #+#             */
/*   Updated: 2024/09/11 16:03:04 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char *str1 = "12345";
	char *str2 = "12a45";
	char *str3 = "";

	printf("Résultat pour str1 : %d\n", ft_str_is_numeric(str1));
	printf("Résultat pour str2 : %d\n", ft_str_is_numeric(str2));
	printf("Résultat pour str3 : %d\n", ft_str_is_numeric(str3));
	return (0);
}
*/
