/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:38:45 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/30 11:53:28 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	int	counter_i;
	int	counter_j;

	counter_i = 0;
	counter_j = 0;
	while (dest[counter_i] != '\0')
	{
		counter_i++;
	}
	while (src[counter_j] != '\0')
	{
		dest[counter_i + counter_j] = src[counter_j];
		counter_j++;
	}
	dest[counter_i + counter_j] = '\0';
	return (dest);
}
