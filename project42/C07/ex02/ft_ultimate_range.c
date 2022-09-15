/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:46:28 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/04 20:36:17 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	result = malloc(sizeof(int) * (diff));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	diff = 0;
	while (max > min)
	{
		result[diff] = min;
		min++;
		diff++;
	}
	return (diff);
}
