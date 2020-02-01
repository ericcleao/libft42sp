/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 23:20:22 by ecerquei          #+#    #+#             */
/*   Updated: 2020/01/21 23:31:45 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	i = 1;
	if (src < dst)
	{
		while (i <= len)
		{
			((char*)dst)[len - i] = ((const char*)src)[len - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
