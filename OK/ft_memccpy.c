/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:25:36 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:51:15 by siferrar    ###    #+. /#+    ###.fr     */
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
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			return (&(d[i + 1]));
		}
		else
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		i++;
	}
	if (i == (int)n - 1)
		return (&(*d));
	else
		return (NULL);
}
