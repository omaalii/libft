/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:50:42 by omaali            #+#    #+#             */
/*   Updated: 2023/10/02 20:50:42 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	char *cast;

	cast = (char *)s;
	while (i < n)
	{
		cast[i] = '\0';
		i++;
	}
}
/*int main() {
size_t lim;
char  *p;

lim = 6;
p = "London";
prinft("%p\n, ft_bzero(p, lim));
  return 0;
}*/