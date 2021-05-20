/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:46:02 by elmas             #+#    #+#             */
/*   Updated: 2021/05/20 20:02:30 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int		count;
	char	*tmp;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}	
	return (count);
}
