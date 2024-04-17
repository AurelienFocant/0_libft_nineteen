/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afocant <afocant@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:47:57 by afocant           #+#    #+#             */
/*   Updated: 2024/04/17 20:47:58 by afocant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
