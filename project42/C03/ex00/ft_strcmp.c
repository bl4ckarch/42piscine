/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:26:01 by evgwanul          #+#    #+#             */
/*   Updated: 2022/08/30 22:41:25 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0'
		&& s1[count] == s2[count])
			count++;
	return (s1[count] - s2[count]);
}
