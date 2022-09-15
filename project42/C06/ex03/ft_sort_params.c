/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:09:01 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/31 19:40:14 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print_params(int ac, char **av)
{
	int		counter_i;

	counter_i = 1;
	while (counter_i < ac)
	{
		ft_putstr(av[counter_i]);
		ft_putstr("\n");
		counter_i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		counter_i;

	counter_i = 0;
	while (s1[counter_i] == s2[counter_i] && s1[counter_i] & s2[counter_i])
		counter_i++;
	return (s1[counter_i] - s2[counter_i]);
}

int	main(int ac, char **av)
{
	int		counter_i;
	int		counter_j;
	char	*temp;

	counter_i = 1;
	while (counter_i < ac)
	{
		counter_j = counter_i + 1;
		while (counter_j < ac)
		{
			if (ft_strcmp(av[counter_i], av[counter_j]) > 0)
			{
				temp = av[counter_j];
				av[counter_j] = av[counter_i];
				av[counter_i] = temp;
			}
			counter_j++;
		}
		counter_i++;
	}
	print_params(ac, av);
	return (0);
}
