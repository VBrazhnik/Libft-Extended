/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:46:28 by vbrazhni          #+#    #+#             */
/*   Updated: 2018/09/06 17:46:29 by vbrazhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isint(const char *str)
{
	unsigned int	result;
	unsigned int	border;
	size_t			i;
	int				sign;

	result = 0;
	border = (unsigned int)(FT_INT_MAX / 10);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if ((result > border || (result == border && (str[i] - '0') > 7))
															&& sign == 1)
			return (false);
		else if ((result > border || (result == border && (str[i] - '0') > 8))
																&& sign == -1)
			return (false);
		result = result * 10 + (str[i++] - '0');
	}
	return (!str[i]);
}
