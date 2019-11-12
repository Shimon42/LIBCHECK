/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 21:13:42 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 16:36:06 by siferrar    ###    #+. /#+    ###.fr     */
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
		while (ft_strchr(set, s[len]) != NULL && len < strlen)
			len++;
	else
	{
		while (ft_strrchr(set, s[strlen - len - 1]) != NULL && len < strlen - 1)
			len++;
	}
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
	if (!s1 || !set)
		return (ft_strdup(""));
	l = ft_strlen(s1);
	trmstrt = ft_trmlen(s1, set, 1);
	trmend = ft_trmlen(s1, set, -1);
	if (trmstrt < l && trmend < l)
		return (ft_strdup(""));
	if ((trmd = malloc((l - trmstrt - trmend + 1) * sizeof(char))) != NULL)
	{
		while (trmstrt + i < l - trmend)
		{
			trmd[i] = (char)s1[trmstrt + i];
			i++;
		}
		trmd[i] = '\0';
	}
	return (trmd);
}
