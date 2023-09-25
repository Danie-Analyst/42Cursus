/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch3 <dasanch3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:52:01 by dasanch3          #+#    #+#             */
/*   Updated: 2023/09/25 16:16:50 by dasanch3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destiny;
	char	*source;
	size_t	i;

	i = 0;
	destiny = ((char *) dst);
	source = ((char *) src);
	if (src == 0 && dst == 0)
		return (dst);
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}
