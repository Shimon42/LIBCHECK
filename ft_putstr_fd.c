/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 21:03:32 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 20:41:39 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *s, int fd)
{
	int length;

	if (s && fd >= 0)
	{
		length = 0;
		while (s[length] != '\0')
			length++;
		write(fd, s, length);
	}
}
