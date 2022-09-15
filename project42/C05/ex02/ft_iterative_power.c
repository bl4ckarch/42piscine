/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:25:15 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/29 16:28:25 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power >= 0)
	{
		while (power)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
	return (0);
}
