/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasyrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:33:46 by pasyrot           #+#    #+#             */
/*   Updated: 2022/08/21 16:55:59 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int		ft_atoi(char *str);

int	main(int ac, char **av)
{
	if (ac <= 2 || ac > 3)
	{
		write(1, "error", 5);
		return (1);
	}
	else
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
}
