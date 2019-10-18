/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 21:13:42 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/18 14:16:34 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	int	iter;

	iter = 0;
	while (s[iter] != '\0')
		iter++;
	if (c == '\0')
		return ((char*)&s[iter]);
	while (iter >= 0)
		if (s[iter--] == c)
			return ((char*)&s[iter + 1]);
	return (NULL);
}

char			*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		i++;
	}
	if ((s[i] == c && c == '\0'))
		return ((char*)&s[i]);
	return ((char *)NULL);
}

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
	l = ft_strlen(s1);
	trmd = "";
	trmstrt = ft_trmlen(s1, set, 1);
	trmend = ft_trmlen(s1, set, -1);
	if ((trmstrt < l && trmend < l)
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
