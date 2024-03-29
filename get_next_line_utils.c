/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoumani <hmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:52:21 by hmoumani          #+#    #+#             */
/*   Updated: 2019/11/18 13:37:42 by hmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		return (char *)(s + i);
	return (0);
}

char	*ft_strdup(const char *s)
{
	char			*p;
	unsigned	int	i;
	unsigned	int	size;

	i = 0;
	size = ft_strlen(s);
	p = (char *)ft_calloc(size + 1, sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		*(p + i) = *(s + i);
		i++;
	}
	return (p);
}

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1size;
	int		s2size;
	char	*p;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	p = (char *)ft_calloc(s1size + s2size + 1, sizeof(char));
	i = 0;
	if (p == NULL)
		return (NULL);
	while (i < s1size + s2size)
	{
		if (i < s1size)
			p[i] = (char)s1[i];
		else
			p[i] = (char)s2[j++];
		i++;
	}
	return (p);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	void			*ptr;

	i = 0;
	ptr = (char *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (count * size > i)
	{
		((unsigned char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
