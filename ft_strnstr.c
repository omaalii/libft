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

static char	*extra(const char *haystack, const char *needle, size_t len)
{
	char	*p_needle;
	char	*p_haystack;
	size_t	i;

	while (haystack && len > 0)
	{
		i = len;
		p_haystack = (char *)haystack;
		p_needle = (char *)needle;
		while (*p_haystack == *p_needle && i > 0 && *p_haystack != '\0')
		{
			if (i == 0 && !p_needle)
				return (0);
			i--;
			p_needle++;
			p_haystack++;
			if (i != 0 && *p_haystack == '\0' && *p_needle)
				return (0);
		}
		if (*p_needle == '\0')
			return ((char *)haystack);
		len--;
		haystack++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*result;

	if (*(char *)haystack == '\0' && *(char *)needle == '\0')
		return ((char *)haystack);
	else if (*(char *)haystack == '\0')
		return (0);
	else if (*(char *)needle == '\0')
		return ((char *)haystack);
	result = extra(haystack, needle, len);
	return (result);
}