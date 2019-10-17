/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:43:55 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 15:30:01 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_checkptr(const void *dst, const void *src)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (dst > src && dst <= src + srclen)
		return (1);
	else
		return (0);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;

	pdst = dst;
	psrc = src;
	if (ft_checkptr(dst, src))
	{
		pdst += len;
		psrc += len;
		while (len--)
			*--pdst = *--psrc;
	}
	else
		while (len--)
			*pdst++ = *psrc++;
	return (dst);
}
