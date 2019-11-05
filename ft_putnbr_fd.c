/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 21:17:49 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 00:17:47 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void		ft_putnbr_fd(int n, int fd)
{
	printf("%d\n", n);

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		exit(0);
	}
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * (-1), fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*
int main (void)
{
	int fd = open("coucou", O_WRONLY);
	//fd = 1;
	ft_putnbr_fd(-2147483648, fd);
//	ft_putnbr_fd(-2147483647, 1);
}*/