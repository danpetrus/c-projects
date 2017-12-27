/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:08:32 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/03 21:41:03 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;

	d = malloc(ft_strlen(s) + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
