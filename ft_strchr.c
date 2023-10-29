/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:33:41 by omaali            #+#    #+#             */
/*   Updated: 2023/10/26 17:28:18 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (i <= len)
	{
		if (s1[i] == (char)c)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
// int main()
// {
//  char *s;
//  int  c;
//  s = "hola-teo";
//  c = 'a';
//  printf("%s\n", ft_strchr(s, c));
//     return (0);
// }
