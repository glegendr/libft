## ft_stradd
The ft_stradd function add the char `c` at the end of the string `s`

Params:
- s: the string
- c: the char to add

Return value:

`(void)`
``` c
void				ft_stradd(char **s, char c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_stradd.c)*
## ft_strchr
The ft_strchr function find the first occurence of the char `c` in the string `s` and return a pointer on it.

Params:
- s: the string
- c: the char to search

Return value:
The pointer on the char founded. `(char *)`
``` c
char				*ft_strchr(const char *s, int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strchr.c)*
## ft_strrchr
Same as [ft_strchr](#ft_strchr) but start at the end

Params:
- s: the string
- c: the char to search

Return value:
A pointer on the char `(char*)`
``` c
char				*ft_strrchr(const char *s, int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strrchr.c)*
## ft_strdup
Dupplicate the string `src` in a new pointer.

Params:
- str: the string to dupplicate

Return value:
The new string. `(char *)`
``` c
char				*ft_strdup(const char *str);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strdup.c)*
## ft_strlen
Return the length of the string `s`

Params:
- s: the string

Return value:
The size of the string. `(size_t)`
``` c
size_t				ft_strlen(const char *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strlen.c)*
## ft_strcmp
Compare the two string `s1` and `s2` and return the difference between the two char.

Params:
- s1: the first string
- s2: the second string

Return value:
The ascci difference between the two characters that differs. If the two strings are the same, return 0. `(int)`
``` c
int					ft_strcmp(const char *s1, const char *s2);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strcmp.c)*
## ft_strncmp
Same as [ft_strcmp](#ft_strcmp) but can't surpass index `n`

Params:
- s1: the first string
- s2: the second string
- n: the index

Return value:
Same as [ft_strcmp](#ft_strcmp). `(int)`
``` c
int					ft_strncmp(const char *s1, const char *s2, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strncmp.c)*
## ft_strnew
Create a new fresh string with size `size`

Params:
- size: the size of the new string

Return value:
The new fresh string. `(char *)`
``` c
char				*ft_strnew(size_t size);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strnew.c)*
## ft_strcat
Append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating `\0'.

!> The string s1 must have sufficient space to hold the result.

Params:
- s1: the first string
- s2: the second string

Return value:
The new string. -same pointer as s1- `(char *)`
``` c
char				*ft_strcat(char *s1, const char *s2);
```
## ft_strncat
Append the `n` first characters of `s2` at the end of the string `s1`

Params:
- s1: the first string
- s2: the second one
- n: the number of char

Return value:
A pointer on s1 `(char *)`
``` c
char				*ft_strncat(char *s1, const char *s2, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strncat.c)*
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strcat.c)*
## ft_strclr
Clear the string `s`

Params:
- s: the string to clear

Return value:
`(void)`
``` c
void				ft_strclr(char *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strclr.c)*
## ft_strcpy
Coppy the string `src` to `dst`

!> The source and destination strings should not overlap, as the behavior is undefined.

Params:
-  dst: the destination
- src: the source

Return value:
The pointer on dst `(char *)`
``` c
char				*ft_strcpy(char *dst, const char *src);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strcpy.c)*
## ft_strncpy
Same as [ft_strcpy](#ft_strcpy) but coppy the `n` first char

Params:
- dst: the destination
- src: the source
- n: the number of char

Return value:
The pointer on dst `(char *)`
``` c
char				*ft_strncpy(char *dst, const char *src, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strncpy.c)*
## ft_strdel
Delete the string `*as`

Params:
- as: the pointer on the string to delete

Return value:
`(void)`
``` c
void				ft_strdel(char **as);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strdel.c)*
## ft_strequ
Compare the two strings `s1` and `s2`, return 1 if there are the same, 2 instead

Params:
- s1: the first string
- s2: the second one

Return value:
1 if the 2 string are identical, 2 instead `(int)`
``` c
int					ft_strequ(char const *s1, char const *s2);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strequ.c)*
## ft_strnequ
Same as [ft_strequ](#ft_strequ) but compare the `n` first char

Params:
- s1: the first string
- s2: the second one
- n: the  number of char

Return value:
`(int)`
``` c
int					ft_strnequ(char const *s1, char const *s2, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strnequ.c)*
## ft_striter
Apply the function `f` on the string `s`

Params:
- s: the string
- f: the function to apply

Return value:
`(void)`
``` c
void				ft_striter(char *s, void(*f)(char *));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_striter.c)*
## ft_striteri
Same as [ft_striter](#ft_striter) but the function take the index of the char

Params:
- s: the string
- f: the function to apply

Return value:
`(void)`
``` c
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_striteri.c)*
## ft_strjoin
Join the `s2` at the end of `s1` in a new malloced one.

Params:
- s1: the first string
- s2: the second one

Return value:
The new string `(char *)`
``` c
char				*ft_strjoin(char const *s1, char const *s2);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strjoin.c)*
## ft_strmap
Create a new string by appling the function `f` on the string `s`

Params:
- s: the string
- f: the function to apply

Return value:
The new string `(char *)`
``` c
char				*ft_strmap(char const *s, char (*f)(char));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strmap.c)*
## ft_strmapi
Same as [ft_strmap](#ft_strmap) but the function take the index of the current char

Params:
- s: the string
- f: the function

Return value:
The new string `(char *)`
``` c
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strmapi.c)*
## ft_strstr
Search the string `s2` in the string `s1` and return a pointer on it.

Params:
- s1: the first string
- s2: the string to search

Return value:
A pointer on the founded string. Null instread. `(char *)`
``` c
char				*ft_strstr(const char *s1, const char *s2);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strstr.c)*
## ft_strnstr
Same as [ft_strstr](#ft_strstr) but only on the `n` fist char of `s1`

Params:
- s1: the first string
- s2: the string to search
- n: the first char

Return value:
A pointer on the founded string. Null instread. `(char*)`
``` c
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strnstr.c)*
## ft_strsplit
Split the string `s` with char `c`

?> The char `c` will be discard

Params:
- s: the string to split
- c: the char

Return value:
A tab filled with the string splitted by char `c` `(char **)`
``` c
char				**ft_strsplit(char const *s, char c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strsplit.c)*
## ft_strsub
Create a new string by copping the `str` starting at index `start` and with length `len`

Params:
- str: the string to coppy
- start: the index where the coppy start
- len: the length of the new string

Return value:
The new string `(char *)`
``` c
char				*ft_strsub(char const *str, unsigned int start, size_t len);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strsub.c)*
## ft_strtrim
Create a new string by copping the string `s` without ` ` / `\n` / `\t` at the end and at the start of the string

Params:
- s: the string

Return value:
The new string. `(char *)`
``` c
char				*ft_strtrim(char const *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_strtrim.c)*
## tab_join
Join the string `s` at the end of the tab `tab`

!> The tab will be free.

Params:
- tab: the tab
- s: the string to add

Return value:
The new tab. `(char **)`
``` c
char				**tab_join(char **tab, char *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/tab_join.c)*
