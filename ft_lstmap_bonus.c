/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 16:59:39 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 17:25:07 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list **tmp;

	while (lst)
	{
		new = ft_lstnew(lst);
		if (tmp == NULL)
			tmp = &new;
		if (new == NULL)
		{
			del(new);
			break ;
		}
		f(new->content);
		new = new->next;
		lst = lst->next;
	}
	return (*tmp);
}
