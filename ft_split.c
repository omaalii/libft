/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:35:59 by omaali            #+#    #+#             */
/*   Updated: 2023/10/27 11:25:17 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_counter(char const *s, char c)
{
	int	words;
	int	len_no_search;

	words = 0;
	len_no_search = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			len_no_search++;
			if (*s == '\0' || *s == c)
				words++;
		}
	}
	return (words);
}

static void	free_split(char **s, int i)
{
	while (i-- > 0)
		free(s[i]);
	free(s);
}

static int	memory(int rows, char **matrix, char *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (i < rows)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			len++;
			if (*s == '\0' || *s == c)
				break ;
		}
		matrix[i] = (char *)ft_calloc(len + 1, sizeof(char));
		if (!matrix[i])
		{
			free_split(matrix, rows);
			return (-1);
		}
		i++;
	}
	return (0);
}

static char	**fill(int rows, char **matrix, char *copy_s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < rows)
	{
		while (*copy_s == c && *copy_s)
			copy_s++;
		while (*copy_s != c && *copy_s)
			matrix[i][j++] = *copy_s++;
		j = 0;
		i++;
	}
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	int		rows;
	char	*copy_s;
	char	**matrix;

	if (!s)
		return (0);
	rows = ft_char_counter(s, c);
	copy_s = (char *)s;
	matrix = (char **)ft_calloc(rows + 1, sizeof(char *));
	if (!matrix)
		return (0);
	if (memory(rows, matrix, (char *)s, c) == -1)
		return (0);
	matrix = fill(rows, matrix, (char *)copy_s, c);
	return (matrix);
}
