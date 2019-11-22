/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:40:31 by tmelvin           #+#    #+#             */
/*   Updated: 2019/11/22 12:31:45 by tmelvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(size)))
	{
		free(ptr);
		return (NULL);
	}
	ft_memcpy(tmp, ptr, size);
	free(ptr);
	return (tmp);
}
