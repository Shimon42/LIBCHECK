/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:25:36 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/19 00:47:38 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&(d[i + 1]));
		i++;
	}
	return (NULL);
}
