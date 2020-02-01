/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:12:40 by ecerquei          #+#    #+#             */
/*   Updated: 2020/01/26 10:53:32 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *new;

	new = malloc(count * size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
