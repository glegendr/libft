/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_get.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 22:03:59 by glegendr          #+#    #+#             */
/*   Updated: 2017/12/12 22:14:51 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void		*v_get(t_vec *vec, size_t index)
{
	void *pos;

	pos = vec->private_content + index * vec->private_elem_size;
	return (pos);
}
