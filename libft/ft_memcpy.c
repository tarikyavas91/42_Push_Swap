/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:33:22 by tyavas            #+#    #+#             */
/*   Updated: 2023/03/20 00:29:35 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_val;
	unsigned char		*src_val;
	size_t				i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	dest_val = (unsigned char *)dest;
	src_val = (unsigned char *)src;
	while (i < n)
	{
		dest_val[i] = src_val[i];
		i++;
	}
	return (dest);
}
