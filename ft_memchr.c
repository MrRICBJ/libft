/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:34:01 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/13 11:58:15 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d;
	size_t	i;

	d = (char *)s;
	i = 0;
	while (d[i] && i < n)
	{
		if (d[i] == c)
			return (&d[i]);
		i++;
	}
	if (c == '\0')
		return (&d[i]);
	return (0);
}
