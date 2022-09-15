/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:23:57 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/20 17:43:09 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	x;

	i = 0;
	y = 0;
	x = 0;
	while (i <= size - 1)
	{
		x = tab[i];
		y = i;
		while (y > 0 && tab[y - 1] > x)
		{
			tab[y] = tab[y - 1];
			y--;
		}
		tab[y] = x;
		i++;
	}
}
