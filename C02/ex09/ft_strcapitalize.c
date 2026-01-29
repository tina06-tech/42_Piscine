/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:15:33 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/25 10:40:44 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_space(char c)
{
	if (!(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z')
		&& !(c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	s;

	s = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_space(str[i]))
		{
			s = 1;
		}
		else
		{
			if (s == 1 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (s == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			s = 0;
		}
		i++;
	}
	return (str);
}

/*
int	main()
{
	char	s[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s\n", ft_strcapitalize(s));
	return (0);
}*/
