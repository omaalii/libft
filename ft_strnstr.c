/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:48:09 by omaali            #+#    #+#             */
/*   Updated: 2023/10/02 18:48:09 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
  if (*needle == '\0')
      return (char*)haystack;

  while ((*haystack != '\0') && (n > 0))
{
  if (*haystack == *needle){
     const char *temp_haystack = *haystack;
     const char *temp_needle = *needle;
     size_t remainder = n;
     
     while (*temp_haystack != '\0' && *temp_needle != '\0' && *temp_haystack == *temp_needle && remainder > 0)
      {
         *temp_haystack++;
         *temp_needle++;
         remainder--;
      }
      
    if (*temp_needle == '\0')
    {
      return (char *)temp_haystack;
    }
}
  haystack++;
  n--;

return NULL;
}