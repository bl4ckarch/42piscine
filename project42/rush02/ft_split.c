/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:32:29 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/04 15:32:33 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_isspace(char *str)
{
	return (*str == '\n' || *str == '\f' || *str == '\r' || *str == '\v' \
	|| *str == '\t' || *str == ' ');
}

char	*ft_split(char *tab)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (tab[i] != ':')
		i++;
	i++;
	while (ft_isspace(&tab[i]) == 1)
		i++;
	while (tab[i])
	{
		if (!(ft_isspace(&tab[i]) && ft_isspace(&tab[i + 1])))
		{
			tab[j] = tab[i];
			tab[i] = ' ';
			j++;
		}
		i++;
	}
	tab[j] = '\0';
	return (tab);
}
