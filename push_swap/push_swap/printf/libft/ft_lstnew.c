/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:22:44 by hkahsay           #+#    #+#             */
/*   Updated: 2021/12/07 14:46:54 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elemt;

	new_elemt = malloc(sizeof(t_list));
	if (!new_elemt)
		return (0);
	(*new_elemt).content = content;
	(*new_elemt).next = NULL;
	return (new_elemt);
}
