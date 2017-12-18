/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glegendr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:26:53 by glegendr          #+#    #+#             */
/*   Updated: 2017/12/18 23:14:41 by glegendr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
#include <stddef.h>
#include <stdlib.h>
#define NB_ELEM_INI 32

typedef struct	s_vec
{
void			*private_content;
size_t			private_elem_nb;
size_t			private_elem_size;
size_t			private_elem_cap;
}				t_vec;


/*
** Create a new vector.
**
** Param:
**    elem_size: the size of each element of the vector.
*/
t_vec			v_new(size_t elem_size);

/*
** Copy a new element at the end of the vector.
**
** Params:
**    vec: the current vector.
**    elem: the element to add at the end of vector.
*/
void			v_push(t_vec *vec, void *elem);

/*
**
**
**
**
** 
*/
void			v_append_raw(t_vec *vec, void *raw, size_t nb);

/*
** Get the pointer of element pointed by index.
**
** Params:
**    vec: the current vector.
**    index: the index.
*/
void			*v_get(t_vec *vec, size_t index);

/*
** Return the element number in the vector.
**
** Param:
**    vec: the current vector.
*/
size_t			v_size(t_vec *vec);

/*
** Free the vector.
**
** Param:
**    vec: the vector to delete.
*/
void			v_del(t_vec *vec);

/*
** Add the second vector at the end of the first.
**
** Params:
**    vec1: first vector.
**    vec2: second vector.
*/
void			v_join(t_vec *vec1, t_vec *vec2);

/*
**
**
**
**
**
** 
*/
t_vec			v_split(t_vec *vec, size_t index);

/*
**
**
**
**
**
**
*/
void			*v_raw(t_vec *vec);
#endif
