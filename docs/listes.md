# List functions
## ft_lstadd
``` c
void				ft_lstadd(t_list **alst, t_list *na);
```
## ft_lstdel
``` c
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
```
## ft_lstdelone
``` c
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
```
## ft_lstiter
``` c
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
```
## ft_lstmap
``` c
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
```
## ft_lstnew
``` c
t_list				*ft_lstnew(void const *content, size_t content_size);
```
