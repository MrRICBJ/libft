/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:14:56 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/13 19:58:16 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*s;
	size_t	i;

	i = 0;
	s = malloc (num * size);
	if (!s)
		return (0);
	ft_bzero(s, num * size);
	return (s);
}
