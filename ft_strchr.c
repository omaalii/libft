/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:33:41 by omaali            #+#    #+#             */
/*   Updated: 2023/10/01 18:33:41 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s1, int c)
{
 int    i;

 i = 0; 
while (s1[i] != '\0')
{
    if (s1[i] == c)
        return (&s1[i]);
    i++;
}  
}
/*int main()
{
 char *s;
 int  c;
 
 s = "hola-teo";
 c = 'a';
 printf("%s\n", ft_strchr(s, c));
    return (0);
}/*

