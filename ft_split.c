/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 10:50:12 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/16 17:51:52 by siferrar    ###    #+. /#+    ###.fr     */
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

static	t_split	init_brain(t_split *brain, const char *s, char c)
{
	(*brain).i = 0;
	(*brain).j = 0;
	(*brain).k = 0;
	(*brain).nbrparts = count_parts(s, c);
	(*brain).partslen = part_length((*brain).nbrparts, s, c);
	return ((*brain));
}

char			**ft_split(char const *s, char c)
{
	t_split	b;
	char	**strs;

	strs = NULL;
	init_brain(&b, s, c);
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
		strs[b.i] = ((char *)NULL);
	}
	free(b.partslen);
	return (strs);
}
