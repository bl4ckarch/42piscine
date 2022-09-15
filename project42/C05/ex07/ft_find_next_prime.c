/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:39:37 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/29 16:43:31 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	value;

	value = 2;
	if (nb <= 1)
		return (0);
	while (value <= (nb / value))
	{
		if ((nb % value) == 0)
			return (0);
		value++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	value;

	value = nb;
	while (value >= nb)
	{
		if (ft_is_prime(value))
			return (value);
		value++;
	}
	return (nb);
}
