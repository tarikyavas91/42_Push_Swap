/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:33:22 by tyavas            #+#    #+#             */
/*   Updated: 2023/03/20 00:30:22 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*letter;
	int		i;

	letter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			letter = (char *)(str + i);
			return (letter);
		}
		i++;
	}
	if (str[i] == c)
		return ((char *)(str + i));
	return (NULL);
}
