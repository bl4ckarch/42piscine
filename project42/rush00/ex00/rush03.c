/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasyrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:36:22 by pasyrot           #+#    #+#             */
/*   Updated: 2022/08/21 18:00:13 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char first, char second, char third, int count)
{
	ft_putchar(first);
	while (count - 1 > 1)
	{
		ft_putchar(second);
		count--;
	}
	if (count == 1)
	{
		write(1, " ", 1);
	}
	else
		ft_putchar(third);
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
	{
		write(1, "error", 5);
	}
	if (x > 0 && y > 0)
	{
		i = 0;
		while (i < y)
		{
			if (x == 1)
				print_line('A', ' ', ' ', x);
			else if (i == 0)
				print_line('A', 'B', 'C', x);
			else if (i == y - 1)
				print_line('A', 'B', 'C', x);
			else
				print_line('B', ' ', 'B', x);
			++i;
			write(1, "\n", 1);
		}
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			j = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = k * 10 + (str[i] - 48);
		i++;
	}
	return (k * j);
}
