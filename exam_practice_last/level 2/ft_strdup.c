/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:37:40 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/15 22:48:56 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;
	
	i = 0;
	dst = (char)malloc(sizeof((*src) * (ft_strlen(src) + 1)));
	if(!dst)
		return(0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

 int	main(void)
 {
	char src[] = "hermon";
	char	*dst;

	dst = ft_strdup(src);
	dst = strdup(src);
	
	printf("%s\n", dst);
 }