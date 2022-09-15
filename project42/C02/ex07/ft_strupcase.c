/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:53:18 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/22 19:56:11 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char	*str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
			count++;
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}
