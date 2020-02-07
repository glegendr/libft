# Memory functions
## ft_bzero
Fill the memory with `\0` character.

Params:
- s: the memory
- n: the size of the memory

Return:

`(void)`
``` c
void				ft_bzero(void *s, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_bzero.c)*
## ft_memcut
Return a new coppy of the memory `data` of size `size`

Params:
- data: the memory
- size: the size of the memory

Return:

The new pointer `(void *)`
``` c
void				*ft_memcut(void *data, int size);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memcut.c)*
## ft_realloc
Copy a memory and malloc to the new size.

Params:
- dst: the memory to Copy.
- mem_size: the size of memory dst.
- new_size: the size you want for your new memory.

Return:

an other pointer of the destination `(void *)`
``` c
void				*ft_realloc(void *mem, int mem_size, int new_size);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_realloc.c)*
## ft_memccpy
Coppy the content of `src` in `dst` since found the charater `c`

Params:
- dst: the destination
- src: the source of the coppy
- c: the charater to find
- n: the size of memory `src`

Return:

The pointer on the founded character `c` `(void *)`
``` c
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memccpy.c)*
## ft_memchr
Find the int `c` in the memory `s` and return a pointer on it.

Params:
- s: the memory
- c: the searched `int`
- n: the size of the memory

Return:

A pointer on the founded character `c` `(void *)`
``` c
void				*ft_memchr(const void *s, int c, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memchr.c)*
## ft_memcmp
Compare memory `s1` and `s2`.

Params:
- s1: the first memory
- s2: the second memory
- n: the size of the memory

Return:

The difference with the 2 character -if the 2 memory are similar, return `0`- `(int)`
``` c
int					ft_memcmp(const void *s1, const void *s2, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memcmp.c)*
## ft_memdel
Free the memory `ap`.

Params:
- ap: the adress of the pointer to free

Return:

`(void)`
``` c
void				ft_memdel(void **ap);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memdel.c)*
## ft_memmove
Coppy `src` in `dest` with size `n`

Params:
- dest: the destination
- src: the source
- n: the size of the memory

Return:

An other pointer on `dest` `(void *)`
``` c
void				*ft_memmove(void *dest, const void *src, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memmove.c)*
## ft_memset
Set the memory `s` with int `c`

Params:
- s: the memory to fill
- c: the character
- n: the size of the memory

``` c
void		 		*ft_memset(void *s, int c, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memset.c)*
## ft_memcpy
Copy a memory into an other one.

Params:
- dst: the destination (non malloced).
- src: the memory to Copy.
- n: size of the memory src.

Return:

an other pointer of the destination `(void *)`
``` c
void				*ft_memcpy(void *dst, const void *src, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memcpy.c)*
## ft_memalloc
Malloc a memory with size `size` and fill it with `\0` character.

Params:
- size: the size of the memory

Return:

The pointer on the new memory `(void *)`
``` c
void				*ft_memalloc(size_t size);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_memalloc.c)*
