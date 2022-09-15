/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:09:39 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 15:00:44 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

void	init_tab(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ultimate_tab[tab][i][j] = 0;
			j++;
		}
		i++;
	}
}

void	init_arg_tab1(char **argv, int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 16)
	{
		if (i == 7)
			j = 0;
		if (argv[1][i] >= '0' && argv[1][i] <= '9' && i < 8)
		{
			ultimate_tab[col_up][0][j] = argv[1][i] - 48;
			j++;
		}
		if (argv[1][i] >= '0' && argv[1][i] <= '9' && i >= 8 && i < 16)
		{
			ultimate_tab[col_down][0][j] = argv[1][i] - 48;
			j++;
		}
		i++;
	}
}

void	init_arg_tab2(char **argv, int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	int	i;
	int	j;

	i = 16;
	j = 0;
	while (i < 32)
	{
		if (i == 23)
			j = 0;
		if (argv[1][i] >= '0' && argv[1][i] <= '9' && i >= 16 && i < 24)
		{
			ultimate_tab[row_left][0][j] = argv[1][i] - 48;
			j++;
		}
		if (argv[1][i] >= '0' && argv[1][i] <= '9' && i >= 24 && i < 32)
		{
			ultimate_tab[row_right][0][j] = argv[1][i] - 48;
			j++;
		}
		i++;
	}
}

void	init(char **argv, int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	init_tab(ultimate_tab);
	init_arg_tab1(argv, ultimate_tab);
	init_arg_tab2(argv, ultimate_tab);
}
