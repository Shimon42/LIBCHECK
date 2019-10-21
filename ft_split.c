/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 10:50:12 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 16:09:50 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_is_skip(char totest, char c)
{
	if (totest == c)
		return (1);
	return (0);
}

static	int		*part_length(int parts, const char *str, char sep)
{
	int *tab;
	int itab;
	int i;

	tab = NULL;
	i = 0;
	itab = -1;
	if ((tab = malloc((parts + 2) * sizeof(int))) != NULL)
		while (str[i] != '\0')
		{
			while (ft_is_skip(str[i], sep) && str[i] != '\0')
				i++;
			tab[++itab] = 0;
			while (!ft_is_skip(str[i], sep) && str[i] != '\0')
			{
				tab[itab]++;
				i++;
			}
		}
	return (tab);
}

static	int		count_parts(const char *str, char sep)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (ft_is_skip(str[i], sep) && str[i] != '\0')
			i++;
		if (!ft_is_skip(str[i], sep) && str[i] != '\0')
			count++;
		while (!ft_is_skip(str[i], sep) && str[i] != '\0')
			i++;
	}
	return (count);
}

static char		**treat_split(t_split *brain, const char *s, char c, char
**strs)
{
	t_split b;

	b = *brain;
	if ((strs = malloc((b.nbrparts + 1) * sizeof(char *))) != NULL)
	{
		while (b.i < b.nbrparts)
			if ((strs[b.i] = malloc((b.partslen[b.i] + 1) * sizeof(char)))
				!= NULL)
			{
				b.j = 0;
				while (ft_is_skip(s[b.k], c) && s[b.k] != '\0')
					b.k++;
				while ((b.partslen[b.i]--) > 0)
					strs[b.i][b.j++] = s[b.k++];
				strs[b.i][b.j] = '\0';
				while (ft_is_skip(s[b.k], c) && s[b.k] != '\0')
					b.k++;
				b.i++;
			}
			else
				free(strs);
		strs[b.i] = ((char *)NULL);
	}
	return (strs);
}

char			**ft_split(char const *s, char c)
{
	t_split	b;
	char	**strs;

	b.i = 0;
	b.j = 0;
	b.k = 0;
	b.nbrparts = count_parts(s, c);
	b.partslen = part_length(b.nbrparts, s, c);
	strs = NULL;
	strs = treat_split(&b, s, c, strs);
	free(b.partslen);
	return (strs);
}
