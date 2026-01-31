/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:30:14 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:30:52 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	printf("%d numero di fibonacci = %d\n", 1, ft_fibonacci(1));
	printf("%d numero di fibonacci = %d\n", 2, ft_fibonacci(2));
	printf("%d numero di fibonacci = %d\n", 3, ft_fibonacci(3));
	printf("%d numero di fibonacci = %d\n", 4, ft_fibonacci(4));
	printf("%d numero di fibonacci = %d\n", 5, ft_fibonacci(5));
	printf("%d numero di fibonacci = %d\n", 6, ft_fibonacci(6));
	printf("%d numero di fibonacci = %d\n", 7, ft_fibonacci(7));
}
*/
