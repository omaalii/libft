/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:47:17 by omaali            #+#    #+#             */
/*   Updated: 2023/10/24 17:47:17 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int num;
    int sig;

    sig = 1;
    i = 0;
    num = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == '')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sig = sig * -1;
        if (str[i + 1] == '-' || str[i + 1] == '+')
            return (0);
        i++
    }
    while (str[i]) >= '0' && str[i] <= '9')
    {
        nb = (nb * 10) + (str[i] - '0');
        i++;
    }
    return (nb * sig);
}
