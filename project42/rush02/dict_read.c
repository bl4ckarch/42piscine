/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:15:39 by laprieur          #+#    #+#             */
/*   Updated: 2022/09/03 15:42:51 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "header.h"

#define BUF_SIZE 4096

int	dict_read(char *test)
{
	int     fd;
	int     ret;
	char	*oui;
	char    buf[BUF_SIZE + 1];

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	oui = malloc(sizeof(char) * ft_strlen(test));
	oui = ft_strstr(buf, test);
	ft_split(oui);
	ft_putstr(oui);
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
				return (0);
}
