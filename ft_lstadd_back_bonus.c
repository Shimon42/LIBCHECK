/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/19 03:03:48 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/07 14:34:58 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **alst, t_list *newlst)
{
	t_list *tmp;

	if (*alst)
	{
		tmp = ft_lstlast(*alst);
		tmp->next = newlst;
	}
	else
		*alst = newlst;
}
