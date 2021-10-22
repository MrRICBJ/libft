/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:02:43 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/16 20:15:29 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!s)
		return (0);
	s1 = (char *) malloc (sizeof (char) * len + 1);
	if (!s1)
		return (0);
	while (i < len)
		s1[i++] = s[start++];
	s1[i] = '\0';
	return (s1);
}
// int main()
// {
// 	char s[] = "123";
// 	printf("%s", ft_substr&s[5]);	
// }