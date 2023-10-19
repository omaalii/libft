/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:26:21 by omaali            #+#    #+#             */
/*   Updated: 2023/10/03 20:26:21 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *cast_s;
    
    cast_s = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        if (cast_s[i] == (unsigned char)c)
            return (&cast_s[i]);
        i++;
    }
    return (0);
}
