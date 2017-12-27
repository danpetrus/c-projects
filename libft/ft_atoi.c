/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 16:53:36 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/05 17:26:35 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int numar;
	int semn;
	int count;

	numar = 0;
	semn = 1;
	count = 0;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		semn = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		count++;
		if (count == 20 && semn < 0)
			return (0);
		if (count == 20 && semn > 0)
			return (-1);
		numar = numar * 10 + *str - '0';
		str++;
	}
	return (numar * semn);
}
