/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:44:32 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/22 19:46:46 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!(str[count] >= 97 && str[count] <= 122))
			return (0);
		count++;
	}
	return (1);
}
