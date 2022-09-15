/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:52:33 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/30 11:57:30 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_i;
	int	counter_j;

	if (*to_find == 0)
		return (str);
	counter_i = 0;
	while (str[counter_i])
	{
		counter_j = 0;
		while (to_find[counter_j] == 0
			||to_find[counter_j] == str[counter_i + counter_j])
		{
			if (to_find[counter_j] == 0)
				return (str + counter_i);
			counter_j++;
		}
		++counter_i;
	}
	return (0);
}
