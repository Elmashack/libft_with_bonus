/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmas <elmas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 05:59:58 by elmas             #+#    #+#             */
/*   Updated: 2021/04/30 07:17:22 by elmas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	char num[120];
	int i;
	long nb;
	
	nb = (long) n;
	i = 0;
	if (nb < 0)
	{
		write(fd, "-", 1);
		num[i++];
		nb *= -1;
	}
	if (nb / 10)
		ft_putnbr_fd(nb / 10, fd);
	
	num[i] = nb % 10 + 48;
	write(fd, &num[i++], 1);
	num[i] = '\0';
	
	// ft_putchar(num[i++]);
	// while((dup /= 10) > 0)
	// {
		
	// 	size *= 10;
	// }
	// while(size > 0)
	// {
	// 	num[i++] = n / size + 48;
	// 	n = n % size;
	// 	size /= 10;
	// }
	// i = 0;
	// while(num[i])
	// 	write(fd, &num[i++], 1);
}

int main()
{
	ft_putnbr_fd(2, 1);
}