/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afocant <afocant@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:56:53 by afocant           #+#    #+#             */
/*   Updated: 2024/04/17 20:56:54 by afocant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	while (len--)
	{
		if (dst < src)
		{
			*((char *)(dst + i)) = *((char *)(src + i));
			i++;
		}
		else
			*((char *)(dst + len)) = *((char *)(src + len));
	}
	return (dst);
}
