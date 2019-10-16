/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:46:04 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:50:54 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*obj;

	i = -1;
	if ((obj = malloc(count * size)) != NULL)
		while (i++ < (int)count)
			((char*)obj)[i] = '\0';
	return (obj);
}
