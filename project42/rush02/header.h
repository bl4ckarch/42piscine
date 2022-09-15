/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:28:35 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/04 14:28:37 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _header_h_
#define _header_h_
#include <stdlib.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
void	ft_putnbr(int nb);
void    ft_print_hundreds(int block);
void    ft_nb_block(char *nb);

char	*ft_split(char *tab);
char    *ft_strstr(char *str, char *to_find);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
int     ft_strlen(char *str);
int	dict_read(char *test);
int	ft_isspace(char *str);
int	ft_atoi(char *str);
#endif
