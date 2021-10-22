/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:27:49 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/21 21:03:13 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*s;

	i = 0;
	if (!s1)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1 + i);
	while (len && ft_strchr(set, s1[len + i]))
		len--;
	s = ft_substr(s1, i, len + 1);
	if (!s)
		return (0);
	return (s);
}
// int main()
// {
// 	char s1[] = "          ";;
// 	char *s2 = s1 + 20;
// 	printf ("%s\n", ft_strtrim(s1, " "));
// 	// printf ("%s", strjoin(s2, s1));
// }
