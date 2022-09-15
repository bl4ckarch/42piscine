/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:53:27 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 14:28:48 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

void	check_row_left(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	max_val;
	int	visible_val;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < 4)
	{
		visible_val = 1;
		max_val = ultimate_tab[tab][i][0];
		while (j < 4)
		{
			if (ultimate_tab[tab][i][j] > max_val)
			{
				visible_val++;
				max_val = ultimate_tab[tab][i][j];
			}
			ultimate_tab[row_left][1][i] = visible_val;
			j++;
		}
		i++;
	}
}

void	check_row_right(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	max_val;
	int	visible_val;
	int	i;
	int	j;

	i = 0;
	j = 2;
	while (i < 4)
	{
		visible_val = 1;
		max_val = ultimate_tab[tab][i][3];
		while (j >= 0)
		{
			if (ultimate_tab[tab][i][j] > max_val)
			{
				visible_val++;
				max_val = ultimate_tab[tab][i][j];
			}
			ultimate_tab[row_right][1][i] = visible_val;
			j--;
		}
		i++;
	}
}

void	check_col_up(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	max_val;
	int	visible_val;
	int	j;
	int	i;

	j = 0;
	i = 1;
	while (j < 4)
	{
		visible_val = 1;
		max_val = ultimate_tab[tab][0][j];
		while (i < 4)
		{
			if (ultimate_tab[tab][i][j] > max_val)
			{
				visible_val++;
				max_val = ultimate_tab[tab][i][j];
			}
			ultimate_tab[col_up][1][j] = visible_val;
			i++;
		}
		j++;
	}
}

void	check_col_down(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	max_val;
	int	visible_val;
	int	j;
	int	i;

	i = 2;
	j = 0;
	while (j < 4)
	{
		visible_val = 1;
		max_val = ultimate_tab[tab][3][j];
		while (i >= 0)
		{
			if (ultimate_tab[tab][i][j] > max_val)
			{
				visible_val++;
				max_val = ultimate_tab[tab][i][j];
			}
			ultimate_tab[col_down][1][j] = visible_val;
			i--;
		}
		j++;
	}
}
