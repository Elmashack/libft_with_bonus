/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:38:24 by elmas             #+#    #+#             */
/*   Updated: 2021/04/29 17:16:24 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int n)
{
	char	*num;
	char	*copy;
	int		i;
	long	dup;
	long	num_size;

	dup = n;
	num_size = 1;
	i = 0;
	while((dup /= 10))
	{
		i++;
		num_size *= 10;
	}
	if (!(num = malloc(sizeof (char *) * (i + 2))))
		return (NULL);
	copy = num;
	dup = (long) n;
	if (dup < 0)
	{
		dup = -dup;
		*copy++ = '-';
	}
	while (num_size > 0)
	{
		*copy++ = dup / num_size + 48;
		dup = dup % num_size;
		num_size /= 10;
	}
	return (num);
}

int main()
{
	int n = 0;
	printf("%s\n", ft_itoa(n));
}