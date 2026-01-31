/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:23:22 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:24:47 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int	main(void)
{
	printf("0, 0 %d", ft_recursive_power(0, 0));
}
*/
