/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch3 <dasanch3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:44:06 by dasanch3          #+#    #+#             */
/*   Updated: 2023/09/25 13:38:22 by dasanch3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		src_idx;
	size_t		value;

	if (size == 0)
		return (ft_strlen((char *)src));
	else if (size < ft_strlen(dest))
		value = ft_strlen((char *)src) + size;
	else
		value = ft_strlen((char *)src) + ft_strlen(dest);
	idx = 0;
	while (dest[idx] != '\0')
		idx++;
	src_idx = 0;
	while (src[src_idx] != '\0' && idx + 1 < size)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}
/*
int main(void)
{
	char	dst[4] = "juan";
	char	src[7] = "isidiot";
	size_t	size = 11;

	printf("%zu", ft_strlcat(dst, src, size));
}
*/