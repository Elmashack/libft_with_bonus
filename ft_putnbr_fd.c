/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluya <nluya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 05:59:58 by elmas             #+#    #+#             */
/*   Updated: 2021/05/09 16:17:04 by nluya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	char	num[120];
	int		i;
	long	nb;

	nb = (long) n;
	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb / 10)
		ft_putnbr_fd(nb / 10, fd);
	num[i] = nb % 10 + 48;
	write(fd, &num[i++], 1);
	num[i] = '\0';
}
