/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:10:25 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/29 16:15:38 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	c1 = 0;
	if (to_find[0] == '\0')
		return (&str[c1]);
	while (str[c1] != '\0')
	{
		c2 = 0;
		while ((to_find[c2] == str[c1 + c2]) && (str[c1 + c2]))
		{
			if (to_find[c2 + 1] == '\0')
				return (&str[c1]);
			c2++;
		}
		c1++;
	}
	return (0);
}

/*
int	main()
{
	char str[] = "Ciao mondo bellissimo";
	char to_find[] = "mondo";
	char *res;

	res = ft_strstr(str, to_find);
	if (res != NULL)
        printf("Trovato: %s\n", res);
	else
        printf("Non trovato\n");

	return (0);
}*/
