/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:42:16 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/03 21:21:48 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src2;
	char	*dest2;
	size_t	i;

	i = -1;
	src2 = (char *)src;
	dest2 = (char *)dest;
	if (src2 < dest2)
		while ((int)(--n) >= 0)
			*(dest2 + n) = *(src2 + n);
	else
		while (++i < n)
			*(dest2 + i) = *(src2 + i);
	return (dest);
}
