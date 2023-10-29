/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:28:09 by omaali            #+#    #+#             */
/*   Updated: 2023/10/26 17:00:35 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*c_dst;
	char	*c_src;

	c_dst = (char *)dst;
	c_src = (char *)src;
	i = len;
	if (c_dst == c_src)
		return (c_dst);
	else if (c_dst > c_src)
	{
		while (i-- > 0)
			c_dst[i] = c_src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			c_dst[i] = c_src[i];
			i++;
		}
	}
	return (c_dst);
}
