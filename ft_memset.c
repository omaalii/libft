/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:16:11 by omaali            #+#    #+#             */
/*   Updated: 2023/10/26 17:25:02 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int value, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = str;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (str);
}
