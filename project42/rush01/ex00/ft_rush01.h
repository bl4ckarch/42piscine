/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush01.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:35:33 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 15:56:54 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH01_H
# define FT_RUSH01_H

# define NB_TAB_ULTIMATE 5
# include <unistd.h>
# include <stdlib.h>

enum e_tab_index
{
	tab,
	col_up,
	col_down,
	row_left,
	row_right
};

void	check_errors(int argc, char **argv, int *error);
void	check_errors_grid(char **argv, int *error);
void	init(char **argv, int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	init_tab(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	init_arg_tab1(char **argv, int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	init_arg_tab2(char **argv, int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	check(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	check_row_left(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	check_row_right(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	check_col_up(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	check_col_down(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
void	ft_putnbr(int nb);
void	print_tab(int ultimate_tab[NB_TAB_ULTIMATE][4][4]);
#endif 
