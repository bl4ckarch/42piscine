/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:57:23 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/22 20:00:43 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlowcase(char	*str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
				count++;
		if (str[count] >= 65 && str[count] <= 90)
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}
