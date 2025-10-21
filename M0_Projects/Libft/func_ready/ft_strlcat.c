/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:25:00 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/14 16:25:01 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	idst;
	size_t	jsrc;

	j = 0;
	idst = 0;
	jsrc = 0;
	while (dst[idst] && idst < dstsize)
		idst++;
	while (src[jsrc])
		jsrc++;
	if (idst == dstsize)
		return (dstsize + jsrc);
	i = idst;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (idst + jsrc);
}
