/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:46:14 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/07 16:29:21 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int		counter_i;

	counter_i = 0;
	while (str[counter_i])
		counter_i++;
	return (counter_i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter_i;
	unsigned int	counter_j;
	unsigned int	dest_size;

	counter_i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[counter_i])
		counter_i++;
	counter_j = 0;
	dest_size = counter_i;
	while (src[counter_i] && counter_j + counter_i < size - 1)
	{
		dest[counter_i + counter_j] = src[counter_j];
		counter_j++;
	}
	if (counter_j < size)
		dest[counter_i + counter_j] = '\0';
	if (size < dest_size)
		return (ft_strlen(src) + size);
	return (dest_size + ft_strlen(src));
}
