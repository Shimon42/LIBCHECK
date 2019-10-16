/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 21:13:42 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:52:38 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_trmlen(char const *s, char const *set, int dir)
{
	size_t len;
	size_t strlen;

	strlen = ft_strlen(s);
	len = 0;
	if (dir > 0)
		while (ft_strchr(set, s[len]) != NULL)
			len++;
	else
		while (ft_strchr(set, s[strlen - len - 1]) != NULL)
			len++;
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	trmstrt;
	size_t	trmend;
	size_t	i;
	char	*trmd;
	size_t	l;

	i = 0;
	l = ft_strlen(s1);
	set = " \n\t";
	trmd = "";
	trmstrt = ft_trmlen(s1, set, 1);
	trmend = ft_trmlen(s1, set, -1);
	if (l != trmstrt && l != trmend
	&& (trmd = malloc((l - trmstrt - trmend + 1) * sizeof(char))) != NULL)
	{
		i = 0;
		while (trmstrt + i < l - trmend)
		{
			trmd[i] = (char)s1[trmstrt + i];
			i++;
		}
		trmd[i] = '\0';
	}
	return (trmd);
}