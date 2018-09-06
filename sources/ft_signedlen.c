/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signedlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:23:52 by vbrazhni          #+#    #+#             */
/*   Updated: 2018/09/06 17:23:53 by vbrazhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signedlen(intmax_t number, int base)
{
	int size;

	size = ft_unsignedlen((uintmax_t)FT_ABS(number), base);
	return (size + ((number < 0) ? 1 : 0));
}
