/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:32:41 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/07 13:26:12 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && ((s1[count] != '\0')
			|| (s2[count] != '\0')))
	{
		if (s1[count] < s2[count])
			return (-1);
		if (s1[count] > s2[count])
			return (1);
		count++;
	}
	return (0);
}
