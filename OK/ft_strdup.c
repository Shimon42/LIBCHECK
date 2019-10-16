/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:32:31 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:51:56 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*dup;
	int		i;

	i = -1;
	length = 0;
	while (s1[length] != '\0')
		length++;
	if ((dup = malloc((length + 1) * sizeof(char))) != NULL)
		while (i++ < length)
			dup[i] = s1[i];
	return (dup);
}
