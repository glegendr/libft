/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_push.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:16:12 by glegendr          #+#    #+#             */
/*   Updated: 2017/12/12 21:59:29 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "vector.h"

void		v_push(t_vec *vec, void *elem)
{
	void *pos;

	if (vec->private_elem_cap <= vec->private_elem_nb)
	{
		if ((vec->private_content = ft_realloc(vec->private_content, 
						vec->private_elem_cap,
						NB_ELEM_INI * vec->private_elem_size)) == NULL)
			return (NULL);
		vec->private_elem_cap += NB_ELEM_INI * vec->private_elem_size;
	}
	pos = vec->private_content +
		vec->private_elem_nb * vec->private_elem_size;
	ft_memcpy(pos, elem, vec->private_elem_size);
	++vec->private_elem_nb;
}
