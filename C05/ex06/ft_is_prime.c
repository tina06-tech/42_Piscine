/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:33:18 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:33:32 by cselaru          ###   ########.fr       */
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

/*
int	main(void)
{
	printf("%d", ft_is_prime(0));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(139));
}
*/
