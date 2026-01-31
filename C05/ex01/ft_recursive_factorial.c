/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:17:27 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:18:48 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 1)
		return (0);
	return (nb * ft_recursive_factorial(nb -1));
}

/*
int	main(void)
{
	printf("0! %d\n", ft_recursive_factorial(0)); 	
	printf("-1! %d\n", ft_recursive_factorial(-1)); 
	printf("2! %d\n", ft_recursive_factorial(2)); 
	printf("3! %d\n", ft_recursive_factorial(3)); 
	printf("4! %d\n", ft_recursive_factorial(4));
}
*/
