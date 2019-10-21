/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/19 03:03:48 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 15:25:01 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *newlst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *alst;
	tmp2 = *alst;
	while (tmp)
		tmp = tmp->next;
	tmp = ft_lstnew(newlst);
}
