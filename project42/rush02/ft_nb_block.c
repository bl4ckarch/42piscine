/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luhego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:21:27 by luhego            #+#    #+#             */
/*   Updated: 2022/09/04 12:38:38 by luhego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_hundreds(int block)
{
	if (block == 2)
		thousand; // 1000
	if (block == 3)
		million; // 1000000
	if (block == 4)
		billion; // 1000000000
}

void	ft_nb_block(char *nb)
{
	int	i;
	int	block;
	int	first_block;
	int	nb_len;

	nb_len = ft_strlen(nb);
	block = nb_len / 3;
	first_block = nb_len % 3;
	i = 0;
	if (first_block == 1)
	{
		ft_print('0', '0', nb[i]);
		ft_print_hundreds(block + 1);
		i++;
	}
	else if (first_block == 2)
	{
		ft_print('0', nb[i], nb[i]);
		ft_print_hundreds(block + 1);
		i += 2;
	}
	while (i < nb_len)
	{
		ft_print(nb[i], nb[i], nb[i]);
		ft_print_hundreds(block--);
		i += 3;
	}
	block--;
}
