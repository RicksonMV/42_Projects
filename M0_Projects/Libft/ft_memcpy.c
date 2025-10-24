/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:24:14 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/14 16:24:16 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		ndst;
	const unsigned char	nsrc;

	if (!dst && !src)
		return (NULL);
	ndst = (unsigned char *)dst;
	nsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		i++;
	}
	return (dst);
}
