/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:09:28 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 15:02:33 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

int	main(int argc, char **argv)
{
	int	error;
	int	ultimate_tab[NB_TAB_ULTIMATE][4][4];

	check_errors(argc, argv, &error);
	check_errors_grid(argv, &error);
	if (error == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	write(1, "Error\n", 6);
	return (1);
}
