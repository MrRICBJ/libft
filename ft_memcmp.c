/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:59:12 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/13 13:37:53 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (((char *)s1)[i] > ((char *)s2)[i])
			return ((unsigned char) \
			((char *)s1)[i] - ((char *)s2)[i]);
		if (((char *)s1)[i] < ((char *)s2)[i])
			return ((unsigned char) \
			((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}
