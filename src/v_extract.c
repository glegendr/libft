/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_extract.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:36:50 by glegendr          #+#    #+#             */
/*   Updated: 2017/12/18 17:36:18 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "libft.h"

void		*v_extract(t_vec *vec, size_t index)
{
	void *tmp;
	void *pos;
	size_t i;

	i = 0;
	tmp = malloc(vec->private_elem_size);
	pos = v_get(vec, index);
	ft_memcpy(tmp, pos, vec->private_elem_size);
	i = 0;
	//printf("%s\n", ((char*)vec->private_content));
	while (i < vec->private_elem_nb - 1 && ((char *)vec->private_content)[i + 1])
	{
	//	printf("%c\t%c\n", ((char *)vec->private_content)[i], ((char *)vec->private_content)[i + 1]);
		((char *)vec->private_content)[i] =
			((char *)vec->private_content)[i + 1];
	//	printf("%c\there\n", ((char *)vec->private_content)[i]);
		++i;
	}
	((char *)vec->private_content)[i] = 0;
	--vec->private_elem_nb;
	return (tmp);
}
