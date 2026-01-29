/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:46:15 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/29 15:01:22 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	cd;
	int	cs;

	cd = 0;
	cs = 0;
	while (dest[cd] != '\0')
	{
		cd++;
	}
	while (src[cs] != '\0')
	{
		dest[cd] = src[cs];
		cd++;
		cs++;
	}
	dest[cd] = '\0';
	return (dest);
}

/*
int	main()
{
	char dest[50] = "Ciao ";
	char src[] = "mondo!";

	ft_strcat(dest, src);

	printf("%s\n", dest);
	return (0);	
}*/
