/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:20:35 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/27 18:44:34 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && c < n - 1)
		c++;
	{
		if (c == n)
		{
			return (0);
		}
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
