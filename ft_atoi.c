/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:35:09 by ecerquei          #+#    #+#             */
/*   Updated: 2020/01/24 22:46:33 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_signal(char c)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			return (1);
		return (-1);
	}
	return (-1);
}

int			ft_atoi(const char *str)
{
	int i;
	int signal;
	int result;
	int past;

	i = 0;
	result = 0;
	past = 0;
	while (ft_isspace(str[i]))
		i++;
	signal = ft_get_signal(str[i]);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result -= str[i] - '0';
		if (past < result)
			return ((signal > 0) ? 0 : -1);
		past = result;
		i++;
	}
	return (signal * result);
}
