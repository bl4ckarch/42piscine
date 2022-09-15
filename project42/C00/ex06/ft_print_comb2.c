/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 06:40:47 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/18 10:33:23 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{	
		j = i;
		while (j <= 98)
		{
			if (i != j)
			{
				ft_putchar(i / 10 + 48);
				ft_putchar(i % 10 + 48);
				write(1, " ", 1);
				ft_putchar(j / 10 + 48);
				ft_putchar(j % 10 + 48);
				if (i != 98 && j != 99)
					write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
