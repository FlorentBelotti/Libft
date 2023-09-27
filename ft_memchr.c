/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:04:05 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/27 22:17:07 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t	i;

	ptr = (unsigned char *)str;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
