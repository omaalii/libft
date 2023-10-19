/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:10:58 by omaali            #+#    #+#             */
/*   Updated: 2023/10/01 19:10:58 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s1, int c)
{
    int    i;

    i = ft_strlen(s1); 
    while (i >= 0)
    {
        if (s1[i] == (char)c)
            return ((char *)&s1[i]);
        i--;
    }
    return (0);
}

// int main()
// {
//  char *s;
//  int  c;
//  s = "hola-omar";
//  c = 'a';
//  printf("%s\n", ft_strchr(s, c));
//     return (0);
// }
