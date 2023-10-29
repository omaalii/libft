/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:51:30 by omaali            #+#    #+#             */
/*   Updated: 2023/10/26 17:18:48 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;
	size_t	src_len;
	size_t	dest_len;

	src_len = (size_t)ft_strlen(src);
	dest_len = (size_t)ft_strlen(dest);
	i = dest_len;
	y = 0;
	while (src[y] != '\0' && i < dstsize - 1 && dstsize > 0)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	if (dstsize < dest_len)
		dest_len = dstsize;
	return (dest_len + src_len);
}
