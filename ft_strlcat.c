/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:36:42 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/12 20:53:42 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	k;
	size_t	j;
	size_t	i;

	k = ft_strlen (d);
	j = ft_strlen (s);
	i = 0;
	if (n <= k)
		return (j + n);
	while (i < n - 1 - k && s[i])
	{
		d[k + i] = s[i];
		i++;
	}
	d[k + i] = '\0';
	return (k + j);
}

// int main()
// 	{
// 		char s[35] = "there is no stars in the sky";
// 		char s1[35] = "there is no stars in the sky";
// 		char *str = "the cake is a lie !\0I'm hidden lol\r\n";
// 		size_t max = ft_strlen(s1) + ft_strlen(s);
// 		printf("%lu", strlcat(s1, str, max));
// 		printf("%zu\n", ft_strlcat(s, str, max));		
// 	}