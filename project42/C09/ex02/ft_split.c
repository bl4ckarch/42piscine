/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:10:57 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/07 19:54:12 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str, char *charset);
void	ft_split_it(char **tab, char *str, char *charset);
int		word_size(char *str, char *charset, int pos);
int		is_char(char c, char *charset);

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = (char *)malloc(sizeof(tab) * (ft_count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	ft_split_it(tab, str, charset);
	tab[ft_count_words(str, charset)] = NULL;
	return (tab);
}

int	ft_count_words(char *str, char *charset)
{
	int		count;
	int		is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (is_char(*str, charset))
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

void	ft_split_it(char **tab, char *str, char *charset)
{
	int		counter_i;
	int		counter_j;
	int		counter_k;

	counter_i = -1;
	counter_j = 0;
	counter_k = 0;
	while (str[++counter_i])
	{
		if (!is_char(str[counter_i], charset))
		{
			if (counter_k == 0)
			{
				tab[counter_j] = malloc(sizeof(char)
						* (word_size(str, charset, counter_i) + 1));
			}
			if (!tab)
				return ;
			tab[counter_j][counter_k] = str[counter_i];
			tab[counter_j][counter_k + 1] = '\0';
			counter_k++;
		}
		counter_k = 0;
		if ((is_char(str[counter_i], charset)
				&& !is_char(str[counter_i + 1], charset)
				&& counter_k > 0) && (counter_k == 0))
			counter_j++;
	}
}

int	word_size(char *str, char *charset, int pos)
{
	int	counter_i;

	counter_i = 0;
	while (str[pos])
	{
		if (!is_char(str[pos], charset))
			counter_i++;
		pos++;
	}
	return (counter_i);
}

int	is_char(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}
