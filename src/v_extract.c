/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_extract.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 14:36:50 by glegendr          #+#    #+#             */
/*   Updated: 2017/12/13 15:18:13 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "libft.h"

void		*v_extract(t_vec *vec, size_t index)
{
	void *tmp;
	void *pos;

	pos = v_get(vec, index);
	ft_memcpy(tmp, pos, vec->private_elem_size);
	pos += vec->private_elem_size;
	free(private_content + vec->private_elem_nb);
	return (tmp);
}
