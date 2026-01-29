/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:31:07 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/23 10:43:12 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

/*
int	main()
{
	char	s1[] = "Hello";
	char	s2[10];

	printf("%s\n", s1);	
	ft_strncpy(s2, s1, 4);
	printf("%s\n", s2);
	return (0);
}*/
