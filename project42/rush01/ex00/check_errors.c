/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarkas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:51:31 by jfarkas           #+#    #+#             */
/*   Updated: 2022/08/28 19:34:58 by saboudou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush01.h"

void	check_errors(int argc, char **argv, int *error)
{	
	int	i;

	if (argc != 2)
	{
		*error = 1;
		return ;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4' && argv[1][i + 1] == ' ')
			i += 2;
		else if (argv[1][i] >= '1' && argv[1][i] <= '4' && i == 30)
			i++;
		else
		{
			*error = 1;
			return ;
		}
	}
	if (i != 31)
		*error = 1;
}

void	check_errors_grid(char **argv, int *error)
{
	int	i;

	i = 0;
	while (argv[1][i + 8] != '\0' && i + 8 < 32)
	{
		if ((argv[1][i] == 4 && argv[1][i + 8] != 1)
			|| (argv[1][i + 8] == 4 && argv[1][i] != 1))
		{
			*error = 1;
		}
		if (argv[1][i] == 3 && argv[1][i + 8] == 3)
		{
			*error = 1;
		}
		if (argv[1][i] == 1 && argv[1][i + 8] == 1)
		{
			*error = 1;
		}
		if (i == 6)
			i = 16;
		else
			i = i + 2;
	}
}
