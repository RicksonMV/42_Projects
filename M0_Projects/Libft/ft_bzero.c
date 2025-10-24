/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:23:59 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/14 16:24:03 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
