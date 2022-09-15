/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:30:24 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/22 19:36:53 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!(str[count] >= 97 && str[count] <= 122)
			|| (str[count] >= 65 && str[count] <= 90))
			return (0);
		count++;
	}
	return (1);
}
