/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:53:13 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:54:04 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

/*int	main(void)
{
	char	*src = "Hello World";
	printf("%s\n", ft_strdup(src));
	return (0);
}*/
