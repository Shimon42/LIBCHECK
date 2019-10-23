/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 20:31:47 by shimon       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 16:03:51 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*newstr;

	if (!s || !f)
		return (ft_calloc(1, 1));
	if ((newstr = malloc((ft_strlen(s) + 1) * sizeof(char))) != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			newstr[i] = f(i, s[i]);
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
