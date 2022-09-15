/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:54:52 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 14:24:11 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

void	check(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
	check_row_left(ultimate_tab);
	check_row_right(ultimate_tab);
	check_col_up(ultimate_tab);
	check_col_down(ultimate_tab);
}

/*void	is_tab_full(int ultimate_tab[NB_TAB_ULTIMATE][4][4])
{
}*/
