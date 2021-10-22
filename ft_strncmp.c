/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:08:54 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/12 20:24:45 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (s1[i] > s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
// int main()
// {
// 	char	s1[99] = "the qwer";
// 	char	s2[99] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char	s3[99] = "the qwer";
// 	char	s4[99] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char	s1[99] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char	s2[99] = "the caka is a lie !\0I'm hidden lol\r\n";
// 	// char	s3[99] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	// char	s4[99] = "the caka is a lie !\0I'm hidden lol\r\n";
// 	printf ("%d\n", strncmp(s1, s2, 39));
// 	printf ("%d", ft_strncmp(s3, s4, 39));
// }