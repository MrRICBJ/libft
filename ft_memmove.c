/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:29:32 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/13 18:09:35 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst > src)
	{
		while (n--)
			((char *) dst)[n] = ((char *) src)[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}

// int	main()
// {
// 	char s[29] = "12345";
// 	char s1[29] = "12345";
// 	printf("STR: 	%s\n", s);
// 	printf("SRC: 	%s\n", &s[0]);
// 	// if (&s[5] > &s[0])
// 	// 	printf("true");
// 	printf("MEMMOVE: %s\n", memmove(&s[3], &s[0], 4));
// 	printf("%s\n", ft_memmove(&s1[3], &s1[0], 3));
// 	printf("STR: 	%s", s);
// 	printf("STR: 	%s", s1);
// }
