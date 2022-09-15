/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:20:12 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/30 12:21:04 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb <= 0)
		return (0);
	factorial = 1;
	while (nb > 1)
	{	
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
