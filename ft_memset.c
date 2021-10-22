/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:04:59 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/08 13:01:51 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int a, size_t n)
{
	unsigned char	*b;

	b = s;
	while (n--)
		*b++ = a;
	return (s);
}
// int main()
// {
// 	char s[20] = "1234567";
// 	// int c = 48;
// 	// size_t n = 3;
// 	printf("%s",ft_memset(s, 48, 2));
// }