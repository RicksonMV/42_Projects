/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:26:05 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/14 16:26:06 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*conv;
	size_t				i;
	unsigned char	convc;

	i = 0;
	*conv = (unsigned char *)str;
	convc = (unsigned char)c;

	while (conv && i < n)
	{
		if(conv[i] == convc)
		{
			return ((void*)&str[i]);
		}
		i++;
	}
}
