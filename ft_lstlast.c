/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstlast.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/19 02:52:33 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/19 03:10:17 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
     while (lst != NULL)
    {
        if(lst->next == NULL)
           break;
        lst = lst->next;
    }
    return (lst);
}
