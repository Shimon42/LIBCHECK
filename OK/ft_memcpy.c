/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:16:21 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:51:22 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	if ((dst == NULL && src == NULL))
		return (NULL);
	while (i < (int)n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (&(*dst));
}
