/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:27:15 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/14 16:27:17 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfh.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	char ptr = (char *)s;
	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size != 0 && (nmemb > (SIZE_MAX / size)))
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
