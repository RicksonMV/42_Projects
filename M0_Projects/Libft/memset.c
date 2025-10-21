/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:23:52 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/20 20:00:02 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptrto;

	i = 0;
	ptrto = (unsigned char *)s;
	while (i < n)
	{
		ptrto[i] (unsigned char)= c;
		i++;
	}
	return (s);
}
