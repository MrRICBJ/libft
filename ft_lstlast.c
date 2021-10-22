/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjanette <bjanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:57:36 by bjanette          #+#    #+#             */
/*   Updated: 2021/10/21 21:15:56 by bjanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int i;
	
	if (!lst)
		return (0);
	i = ft_lstsize(lst);
	while (i >= 0 && lst)	
	{
		lst = lst -> next;
		i--;
	}
	return (lst);
}