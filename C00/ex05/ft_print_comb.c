/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cselaru <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:09:10 by cselaru           #+#    #+#             */
/*   Updated: 2026/01/19 11:25:10 by cselaru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int r, int g)
{
	write(1, &i, 1);
	write(1, &r, 1);
	write(1, &g, 1);
	if (i != '7')
	{
		write(1, &",", 1);
		write(1, &" ", 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	r;
	int	g;

	i = '0';
	r = i +1;
	g = r +1;
	while (i <= '7')
	{
		while (r <= '8')
		{
			while (g <= '9')
			{
				ft_putchar(i, r, g);
				g++;
			}
			r++;
			g = r + 1;
		}
		i++;
		r = i + 1;
		g = r + 1;
	}
}

int main()
{
	ft_print_comb();
}
