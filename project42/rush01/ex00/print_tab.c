/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:49:09 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 16:54:42 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

void	ft_putnbr(int nb)
{
	char	n;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10 && nb >= 0)
	{
		n = nb + '0';
		write(1, &n, 1);
	}
}

void	print_tab(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (j != 3)
				ft_putnbr(ultimate_tab[tab][i][j]);
			else
				ft_putnbr(ultimate_tab[tab][i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
