# Is something functions
## ft_isalpha
The ft_isalpha function tests for alphabetic characters, tiny or captials.

Params:
- c: the character to check

Return value:

1 if `c` is alpha, 0 on the contrary. `(int)`
``` c
int					ft_isalpha(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isalpha.c)*
## ft_isdigit
The ft_isdigit function tests for numbers characters.

Params:
- c: the character to check

Return value:

1 if `c` is a number, 0 on the contrary. `(int)`
``` c
int					ft_isdigit(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isdigit.c)*
## ft_isalnum
ft_isalnum is the combination with [ft_isalpha](#ft_isalpha) and [ft_isdigit](#ft_isdigit)
``` c
int					ft_isalnum(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isalnum.c)*
## ft_isascii
The ft_isascii function test for ascii characters, this include `0` to `127`.

Params:
- c: the character to check

Return value:

1 if `c` is an ascii number, 0 on the contrary. `(int)`
``` c
int					ft_isascii(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isascii.c)*
## ft_isnegative
The ft_isnegative function test if `n` is negative, then will print 'N' if he is 'P' if he is positive

Params:
- n: the number to check

Return value:

`(void)`
``` c
void				ft_isnegative(int n);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isnegative.c)*
## ft_isprint
The ft_isascii function test for printable characters, this include `31` to `127`.

Params:
- c: the character to check

Return value:

1 if `c` is a printable number, 0 on the contrary. `(int)`
``` c
int					ft_isprint(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isprint.c)*
## ft_isspace
The isspace() function tests for the white-space characters.  For any locale, this includes the following standard characters:
- `\t`
- `\n`
- `\v`
- `\f`
- `\r`
- `space`

Params:
- c: the character to check

Return value:

1 if `c` is a space character, 0 on the contrary. `(int)`
``` c
int					ft_isspace(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_isspace.c)*
