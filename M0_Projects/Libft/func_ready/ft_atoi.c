/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricperei <ricperei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:26:25 by ricperei          #+#    #+#             */
/*   Updated: 2025/10/17 22:15:29 by ricperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		np;
	long	result;
	
	np = 1;
	result = 0;
	
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || * str == '-')
	{
		if(*str == '-')
			np = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * np);
}
