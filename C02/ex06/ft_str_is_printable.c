/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:46:14 by akehili           #+#    #+#             */
/*   Updated: 2024/09/12 17:51:58 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str1 = "Hello, World!";
	char *str2 = "Hello\t";

	printf("IMPRIMABLE : %d\n", ft_str_is_printable(str1));
	printf("IMPRIMABLE : %d\n", ft_str_is_printable(str2));

	return (0);
}
*/
