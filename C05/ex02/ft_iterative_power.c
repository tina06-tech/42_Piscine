/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:22:03 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:22:21 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}

/*
int	main(void)
{
	printf("0, 0 %d\n", ft_iterative_power(0, 0)); 	
	printf("-1 %d\n", ft_iterative_power(-1, 1)); 
	printf("2, 3 %d\n", ft_iterative_power(2, 3)); 
	printf("3, 0 %d\n", ft_iterative_power(3, 0)); 
	printf("4, 5 %d\n", ft_iterative_power(4, 5));

}
*/
