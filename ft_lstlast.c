/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 11:04:14 by elmas             #+#    #+#             */
/*   Updated: 2021/05/20 20:00:43 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp -> next != NULL)
	{
		tmp = tmp -> next;
	}
	return (tmp);
}