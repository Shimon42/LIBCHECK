/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 12:28:52 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/14 17:03:55 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long n)
{
	long	iter;

	iter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		iter++;
	}
	while (n > 0)
	{
		n /= 10;
		iter++;
	}
	return (iter);
}

static	char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(str);
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i++;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	int		sign;

	sign = 1;
	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (!(str = ft_calloc((ft_nbrlen(n) + 1), sizeof(char))))
		return (NULL);
	if (n < 0)
		sign = -1;
	while (n != 0)
	{
		str[i] = '0' + ((n % 10) * (n % 10 > 0 ? 1 : -1));
		n = n / 10;
		i++;
	}
	if (sign < 0)
		str[i++] = '-';
	ft_strrev(str);
	return (str);
}
