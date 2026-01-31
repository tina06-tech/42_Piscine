/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:34:39 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:34:56 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if ((nb % 2 == 0 || nb < 2) && nb != 2)
		return (0);
	while (i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while ((ft_is_prime(nb) != 1))
		nb++;
	return (nb);
}

/*
int	main(void)
{
	printf("%d", ft_find_next_prime(114));
}
*/
