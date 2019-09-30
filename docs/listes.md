# List functions
## ft_lstadd
Add the element `na` on the top of the list.

Params:
- alst: the adress of the pointer on the first link
- na: the new link

Return:

`(void)`
``` c
void				ft_lstadd(t_list **alst, t_list *na);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_lstadd.c)*
## ft_lstdel
Free all the link and their content with the function `del`

Params:
- alst: the adress of the pointer on the first link
- del: the function who del the content of the link

Return:

`(void)`
``` c
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_lstdel.c)*
## ft_lstdelone
Same as [ft_lstdel](#ft_lstdel) but it will free only one link pointed by `alst`
``` c
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_lstdelone.c)*
## ft_lstiter
Use the function `f` on each link of the list `lst`

Params:
- lst: the pointer on the first link of the list
- f: the function who will be use on each link

Return:

`(void)`
``` c
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_lstiter.c)*
## ft_lstmap
Same as [ft_lstiter](#ft_lstiter) but this time in a new list.
``` c
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_lstmap.c)*
## ft_lstnew
Create a new list, the first link will be fill with content.

Params:
- content: the content.
- content_size: the size of the content (`sizeof(content)`)

Return:

the new list `t_list`
``` c
t_list				*ft_lstnew(void const *content, size_t content_size);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_lstnew.c)*
