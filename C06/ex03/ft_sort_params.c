/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:47:57 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:48:58 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_strings(int ac, char *av[]);

int	main(int ac, char *av[])
{
	int	n;

	ft_sort_strings(ac, &av[0]);
	n = 1;
	while (n < ac)
	{
		ft_putstr(&av[n][0]);
		n++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0' && s2[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_strings(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		while (j < ac - i - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				temp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
