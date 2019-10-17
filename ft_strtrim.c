/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 21:13:42 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/17 17:18:09 by siferrar    ###    #+. /#+    ###.fr     */
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
	{
		while (ft_strrchr(set, s[strlen - len + 1]) != NULL)
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
	set = " \n\t";
	trmd = "";
	trmstrt = ft_trmlen(s1, set, 1);
	trmend = ft_trmlen(s1, set, -1);
	printf("%lu - %lu\n", trmstrt, trmend);
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

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	*strtrim;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			ft_print_result("NULL");
		else
			ft_print_result(strtrim);
		if (strtrim == s1)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
}
