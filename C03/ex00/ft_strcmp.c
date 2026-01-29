/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 11:02:26 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/27 18:40:51 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	while (s1[c] != '\0' && s2[c] != '\0' && s1[c] == s2[c])
	{
		c++;
	}
	d = s1[c] - s2[c];
	return (d);
}

/*
int main() 
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	char *str3 = "Hello world";
	char *str4 = "hell";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparing '%s' and '%s': %d\n", str1, str4, ft_strcmp(str1, str4));
	return (0);
}*/
