/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 21:12:46 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 18:19:52 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t length;

	if (s && fd >= 0)
	{
		length = 0;
		while (s[length] != 0)
			length++;
		write(fd, s, length);
		write(fd, "\n", 1);
	}
}
