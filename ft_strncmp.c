/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:08:28 by omaali            #+#    #+#             */
/*   Updated: 2023/10/01 21:08:28 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int ft_strncmp(const char* s1, const char* s2, size_t n)
{
    size_t i;

    i = 0;
    while (i <= ft_strlen(s1) && i < n) 
    {    
        if (s1[i] == s2[i])
            i++;
        else
            return((unsigned char)s1[i] - (unsigned char)s2[i]); 
    }
    return(0);
}
/*
#include <stdio.h>

int main() {
  char  *a;
  char  *b;
  int range;
  
  a = "Hola";
  b = "Holiday";
  range = 1;
  printf("The difference between strings = %i\n", ft_strncmp(a, b, range)); 
  return 0;
}*/