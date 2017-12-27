/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 15:19:09 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/03 21:48:11 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char *p1;
	const unsigned char *p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (*p1 != '\0')
	{
		if (*p2 == '\0')
			return (1);
		if (*p2 > *p1)
			return (-1);
		if (*p1 > *p2)
			return (1);
		p1++;
		p2++;
	}
	if (*p2 != '\0')
		return (-1);
	return (0);
}
