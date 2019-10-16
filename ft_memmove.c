/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:43:55 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:51:37 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_memlen(const char *s)
{
	size_t length;

	length = 0;
	while (s[length] != '\0')
		length++;
	if (s[length] == '\0')
		length++;
	return (length);
}

static	int		ft_checkptr(const void *dst, const void *src)
{
	size_t srclen;

	srclen = ft_memlen(src);
	if (dst >= src && dst <= src + srclen)
		return (1);
	else
		return (0);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*pdst;
	const char	*psrc;

	i = 0;
	pdst = dst;
	psrc = src;
	if (ft_checkptr(dst, src))
		while (len--)
			*--pdst = *--psrc;
	else
		while (len--)
			*pdst++ = *psrc++;
	return (dst);
}
