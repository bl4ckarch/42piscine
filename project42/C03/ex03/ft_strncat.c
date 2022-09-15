/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:42:13 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/30 11:53:44 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned	int nb)
{
	unsigned int	counter_j;
	int				counter_i;

	counter_i = 0;
	counter_j = 0;
	while (dest[counter_i] != '\0')
	{
		counter_i++;
	}
	while (src[counter_j] != '\0' && counter_j < nb)
	{
		dest[counter_i] = src[counter_j];
		counter_i++;
		counter_j++;
	}
	dest[counter_i] = '\0';
	return (dest);
}
