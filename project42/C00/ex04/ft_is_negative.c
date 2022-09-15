/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:41 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/17 19:57:03 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	if (n < 0)
	{
		negative = 'N';
		ft_putchar(negative);
	}
	else
	{
		positive = 'P';
		ft_putchar(positive);
	}
}
