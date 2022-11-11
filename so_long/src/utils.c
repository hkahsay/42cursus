/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:19:09 by hkahsay           #+#    #+#             */
/*   Updated: 2022/11/08 12:00:19 by hkahsay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../so_long.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	ft_count(char const *s, char c)
{
	int	word;
	int	flag;

	word = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			word++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}		
	return (word);
}

static char	*ft_str_size(const char *str, int start, int end)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		dst[i++] = str[start++];
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(const char *s, char c)
{
	size_t		i;
	size_t		j;
	int			temp;
	char		**split;

	if (!s)
		return (NULL);
	split = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	temp = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && temp < 0)
			temp = i;
		else if ((s[i] == c || i == (size_t)ft_strlen(s)) && temp >= 0)
		{
			split[j++] = ft_str_size(s, temp, i);
			temp = -1;
		}
	}
	split[j] = 0;
	return (split);
}
