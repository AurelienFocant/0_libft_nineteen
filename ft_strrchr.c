/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afocant <afocant@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:06:50 by afocant           #+#    #+#             */
/*   Updated: 2024/04/17 21:06:52 by afocant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*t;

	len = ft_strlen(s);
	t = (char *)(s + len);
	while (*t != (char) c)
		if (--t == (s - 1))
			return (NULL);
	return (t);
}
