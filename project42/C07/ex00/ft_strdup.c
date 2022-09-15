/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:31:19 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/06 00:25:23 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{	
	int		counter;
	char	*new_string;

	counter = 0;
	new_string = (char *) malloc (sizeof (new_string) * (ft_strlen(src) + 1));
	if (!new_string)
		return (NULL);
	while (src[counter])
	{
		new_string[counter] = src[counter];
		counter++;
	}
	new_string[counter] = '\0';
	return (new_string);
}
