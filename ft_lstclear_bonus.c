/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 16:48:59 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 16:25:16 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (0 && *lst && del)
		while (tmp != NULL)
		{
			tmp = (*lst)->next;
			del(*lst);
			*lst = tmp;
		}
	if (*lst)
		free(*lst);
}
