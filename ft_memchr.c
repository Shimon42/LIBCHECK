/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:07:57 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:51:18 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n && (((char*)s)[i] != '\0' || ((char*)s)[i] == '\0'))
	{
		if (((char*)s)[i] == c)
			return (&((void *)s)[i]);
		i++;
	}
	return (NULL);
}
