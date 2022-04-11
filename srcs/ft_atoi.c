/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:13:46 by mnaimi            #+#    #+#             */
/*   Updated: 2022/04/10 17:46:45 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *str)
{
	char	sign;
	int		sum;
	int		i;

	i = 0;
	sum = 0;
	sign = 0;
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '-' || str[i] == '+')
		sign = str[i] - '+';
	while (ft_isdigit(str[i]))
		sum = (sum * 10) + (str[i++] - '0');
	if (sign)
		sum *= -1;
	return (sum);
}