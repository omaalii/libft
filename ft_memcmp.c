/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:05:45 by omaali            #+#    #+#             */
/*   Updated: 2023/10/20 21:05:45 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    char    c_s1;
    char    c_s2;

    c_s1 = (char *)s1;
    c_s2 = (char *)s2;
    i = 0;
    while (i < n)
    {
        if (c_s1[i] !=  c_s2[i])
            return (unsigned char c_s1[i] - unsigned char c_s2[i])
        i++;
    }
    return (0);
}
