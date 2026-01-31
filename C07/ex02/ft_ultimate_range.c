/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:54:56 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:55:10 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	*temp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ret = max - min;
	*range = (int *)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}

/*int	main(void)
{
	int x = 5;
	int *i = &x;
	printf("%d\n", ft_ultimate_range(&i, 10, 20));
	return (0);
}*/
