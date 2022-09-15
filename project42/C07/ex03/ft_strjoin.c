/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:46:47 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/05 16:07:15 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char	*dest, char	*src);
int		ft_strlen_strs(int size, char **strs, char *sep);
char	*ft_strcat(char	*dest, char	*src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	if (size == 0)
	{
		tab = (char *)malloc(sizeof(char) * 1);
		tab[0] = '\0';
		return (tab);
	}
	else
		tab = (char *) malloc (sizeof(char) * ft_strlen_strs(size, strs, sep));
	while (i < size)
	{
		tab = ft_strcat(tab, strs[i]);
		if (i < (size - 1))
			tab = ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = -1;
	while (str[++counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen_strs(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	len_strs;

	i = 0;
	len_strs = 0;
	len = 0;
	while (i != size)
	{
		len = ft_strlen(strs[i]);
		if (i < (size - 1))
			len += ft_strlen(sep);
		len_strs += len;
		i++;
	}
	return (len_strs);
}

char	*ft_strcat(char	*dest, char	*src)
{	
	int	counter_i;
	int	counter_j;

	counter_i = 0;
	counter_j = 0;
	while (dest[counter_i] != '\0')
	{
		counter_i++;
	}
	while (src[counter_j] != '\0')
	{
		dest[counter_i + counter_j] = src[counter_j];
		counter_j++;
	}
	dest[counter_i + counter_j] = '\0';
	return (dest);
}




#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			s[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			s[c++] = sep[j++];
		}
		i++;
	}
	s[c] = '\0';
	return (s);
}
