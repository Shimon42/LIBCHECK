/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 16:59:39 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 19:29:13 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *next;
	t_list **newptr;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	
	while (lst)
	{
		next = ft_lstnew(f(lst->content));
		if (new)
			new->next = next;
		else
		{
			new = next;
			new_start = &new;
		}
		lst = lst->next;
		new = new->next;
	}
	if (del)
		ft_lstclear(&new, del);
	return (*new_start);
}
