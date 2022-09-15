/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:45:39 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/05 15:28:46 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;

	index = 0;
	tab = malloc (sizeof (int) * (max - min));
	if (min >= max)
		return (NULL);
	if (!tab)
		return (NULL);
	while (min <= max)
	{
		tab[index] = min;
		index++;
		min++;
	}
	return (tab);
}
