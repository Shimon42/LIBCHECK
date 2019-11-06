/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/19 02:37:14 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 20:52:49 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft_bonus.h"

int	ft_lstsize(t_list *lst)
{
	size_t lenght;

	lenght = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lenght++;
	}
	return (lenght);
}
