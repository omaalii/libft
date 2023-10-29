/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:05:45 by omaali            #+#    #+#             */
/*   Updated: 2023/10/26 18:44:35 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	char			*c_s1;
	char			*c_s2;
	unsigned char	c;
	unsigned char	w;

	c_s1 = (char *)s1;
	c_s2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
		{
			c = (unsigned char)c_s1[i];
			w = (unsigned char)c_s2[i];
			return (c - w);
		}
		i++;
	}
	return (0);
}
