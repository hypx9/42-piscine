/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:19:06 by akehili           #+#    #+#             */
/*   Updated: 2024/09/12 17:55:23 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			(str[i] = str[i] + 32);
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "HELLO XO";
	printf("TEXTE AFFICHE : %s", ft_strlowcase(str));
	return (0);
}
*/
