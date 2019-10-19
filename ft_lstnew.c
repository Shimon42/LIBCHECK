/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: siferrar <siferrar@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/19 01:24:29 by siferrar     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/19 02:29:00 by siferrar    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libbonus.h"

t_list *ft_lstnew(void *content)
{
    t_list *newlst; 
    if ((newlst = malloc(sizeof(t_list))) != NULL)
    {
        newlst->content = content;
        newlst->next = NULL;
    }
    return (newlst);
}