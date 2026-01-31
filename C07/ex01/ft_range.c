/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 08:54:22 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/31 08:54:36 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range( int min, int max)
{
	int	*ret;
	int	*temp;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * ((long long)max - min));
	if (!ret)
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}

/*int	main(void)
{
	printf("%p\n", ft_range(10, 10));	
	return (0);
}*/
