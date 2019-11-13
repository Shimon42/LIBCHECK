/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 21:17:49 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/13 16:09:56 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_neg(int nbr)
{
	if (nbr >= 0)
		return (0);
	else if (nbr == -2147483648)
		return (2);
	return (1);
}

static int	ft_abs(int nbr)
{
	if (ft_is_neg(nbr))
		return (nbr + (nbr * (-2)));
	else
		return (nbr);
}

void		ft_putnbr_fd(int n, int fd)
{
	int test[10];
	int i;
	int neg;

	neg = ft_is_neg(n);
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (neg)
			n = ft_abs(n);
		i = -1;
		while (n != 0 && i <= 10)
		{
			i++;
			test[i] = ft_abs(n % 10);
			n = ((n - test[i]) / 10);
		}
		if (neg)
			ft_putchar_fd('-', fd);
		while (i >= 0)
			ft_putchar_fd(test[i--] + '0', fd);
	}
}
