/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:11:53 by omaali            #+#    #+#             */
/*   Updated: 2023/09/22 19:28:12 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void ft_bzero(void *s, size_t n);
int ft_toupper(int c);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *memchr(const void *s, int c, size_t n);
char *ft_strchr(const char *s1, int c);
size_t ft_strlen(const char *s);
int ft_strncmp(const char* s1, const char* s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t n);
char *ft_strchr(const char *s1, int c);
int ft_tolower(int c);
void *ft_memset(void *b, int c, size_t len);
#endif