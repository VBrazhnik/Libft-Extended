/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:24:00 by vbrazhni          #+#    #+#             */
/*   Updated: 2018/09/06 17:24:02 by vbrazhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_unsignedlen(uintmax_t number, int base)
{
	int size;

	size = 1;
	while ((number /= base))
		size++;
	return (size);
}
