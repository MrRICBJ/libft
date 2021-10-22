/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:32:02 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/20 21:19:57 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_uk(const char *n, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (!n)
		return (0);
	while (n[a])
	{
		if ((n[a] == c) && n[a + 1] && (n[a + 1] != c) && (a != 0) && (c != '\0'))
			i++;
		a++;
	}
	if (i == 0 && c != '\0')
		return (1);
	// printf("%d\n", i);
	return (i);
}

static int	ft_num_ww(const char *n, char c)
{
	int	i;

	i = 1;
	if (!n)
		return (0);
	while (n[i] && n[i] != c)
		i++;
	return (i);
}

static char	*ft_uk_ww(const char *s, char c)
{
	char	*f;
	int		len;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (!s)
		return (0);
	len = ft_num_ww(s, c);
	f = malloc (sizeof(char) * (len + 1));
	if (!f)
		return (0);
	f[len] = '\0';
	while (s[i] == c)
		i++;
	while (i < len)
	{
		f[i] = s[i];
		i++;
	}	
	return (f);
}

static char	ft_cl(char **sr)
{
	int	i;

	i = 0;
	while (sr[i])
		free(sr[i++]);
	free(sr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		l;
	char	**sr;
	int		j;
	int		j1;

	l = ft_num_uk(s, c);
	j1 = 0;
	i = 0;
	j = 0;
	if (!s)
		return (0);
	sr = malloc (sizeof(char *) * (l + 1));
	if (!sr)
		return (0);
	if (l == 0)
		return (0);
	sr[l] = NULL;
	while (i < l)
	{
		while (s[j] == c)
			j++;
		sr[i] = ft_uk_ww(&s[j], c);
		if (!sr)
			ft_cl(sr);
		while (s[j] != c && s[j])
			j++;
		j++;
		i++;
	}
	return (sr);
}

// int main()
// {
// 	char *c = "\0aa\0bbb";
// 	char c1 = '\0';
// 	char **ar = ft_split(c, c1);
// 	int i = 0;
// 	while (ar[i])
// 	{
// 		printf("[%s]", ar[i]);
// 		i++;
// 	}
// }
