/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 13:03:23 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:52:41 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	endlength;
	size_t	i;
	char	*obj;

	i = 0;
	endlength = 0;
	while (i < start)
		i++;
	while (s[i++] != '\0' && endlength < len)
		endlength++;
	i = 0;
	if ((obj = malloc((endlength + 1) * sizeof(char))) != NULL)
	{
		while (i < len)
		{
			obj[i] = s[start + i];
			i++;
		}
		obj[i] = '\0';
	}
	return (obj);
}