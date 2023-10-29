/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:52:04 by omaali            #+#    #+#             */
/*   Updated: 2023/10/26 16:37:14 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = (void *)malloc(count * size);
	if (!memory)
		return (0);
	ft_bzero(memory, count * size);
	return (memory);
}
