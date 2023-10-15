/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:54:18 by omaali            #+#    #+#             */
/*   Updated: 2023/10/14 18:54:18 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy(void *dst, const void *src, size_t n)
{
if (!dst && !src)
{
    return dst;
}
while (n > 0)
{
    *((char *)dest) = *((char *)dest );
    ((char *)dest +1);
    ((char *)src +1);
    n --;
}
    return dest;
}