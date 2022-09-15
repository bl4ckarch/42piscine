/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:43:44 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/29 11:11:58 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	counter;
	int	negative;
	int	result_value;

	counter = 0;
	negative = 1;
	result_value = 0;
	while (str[counter] <= ' ')
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
		{
			negative *= -1;
		}
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		result_value = result_value * 10 + (str[counter] - 48);
		counter++;
	}
	return (result_value * negative);
}
