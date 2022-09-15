/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgwanul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 01:23:40 by evgwanul          #+#    #+#             */
/*   Updated: 2022/09/05 01:49:15 by evgwanul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments.\n"  
# define ODD_MSG "I have an odd number of arguments.\n"
# define TRUE 1
# define FALSE 0
# define EVEN(nbr) ((nbr % 2) == 0)
# define SUCCESS 0

int		main(int argc, char **argv);
void	ft_putstr(char *str);
typedef int	t_bool;
t_bool	ft_is_even(int nbr);
#endif
