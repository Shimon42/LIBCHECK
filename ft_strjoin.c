/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 20:30:31 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:56:09 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	i = 0;
	if ((join = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char))) != NULL)
	{
		while (*s1 != '\0')
			join[i++] = *s1++;
		while (*s2 != '\0')
			join[i++] = *s2++;
		join[i] = '\0';
	}
	return (join);
}
