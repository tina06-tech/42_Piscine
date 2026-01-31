/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:04:29 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:19:47 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		fact = fact * (nb - 1);
		nb--;
	}
	return (fact);
}

/*
int main()
{
	printf("0! %d\n", ft_iterative_factorial(0));
	printf("-1! %d\n", ft_iterative_factorial(-1));
	printf("2! %d\n", ft_iterative_factorial(2));
	printf("3! %d\n", ft_iterative_factorial(3));
	printf("4! %d\n", ft_iterative_factorial(4));
	return (0);
}*/
