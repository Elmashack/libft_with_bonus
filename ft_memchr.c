/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:46:11 by nluya             #+#    #+#             */
/*   Updated: 2021/05/15 09:52:25 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *dst, int c, size_t i)
{
	int	a;

	a = (int)i;
	while (i > 0)
	{
		if (*(const unsigned char *)dst == (unsigned char)c)
			return ((char *)dst);
		dst++;
		a--;
	}	
	return (NULL);
}
