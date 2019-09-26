# Conversion functions
## ft_atoi
Converts the initial portion of the string pointed to by s to `int` representation.

Params:
- s: the string to convert

Return value:

The representation `(int)`
``` c
int					ft_atoi(const char *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_atoi.c)*
## ft_atoli
Same as [ft_atoi](#ft_atoi) but the string s convert in `long int`
``` c
long int			ft_atoli(const char *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_atoi.c)*
## ft_atolli
Same as [ft_atoi](#ft_atoi) but the string s convert in `long long int`
``` c
long long int		ft_atolli(const char *s);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_atoi.c)*
## ft_itoa
Converts the initial `int` to a string representation.

Params:
- nbr: the number to convert

Return value:

The representation `(char *)`
``` c
char				*ft_itoa(int nbr);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_itoa.c)*
## ft_itoa_base
Converts the initial `int` to a string representation in base `base`.

Params:
- nb: the number to convert
- base: the base
- flag: the type of alphabet who whould be use

?> The flag is defined by `X` or `x`, `X` for caps and `x` for tiny

Return value:

The representation `(char *)`
``` c
char				*ft_itoa_base(long long nb, int base, char flag);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_itoa_base.c)*
## ft_uitoa_base
Same as [ft_itoa_base](#ft_itoa_base) but the nb is `unsigned`
``` c
char				*ft_uitoa_base(unsigned long long nb, unsigned int base, char flag);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_uitoa_base.c)*
## ft_tolower
Tranform c into his tiny letter

Params:
- c: the letter to change

?> If c isn't a letter or is already tiny it will return c

Return value:

The tiny letter `(int)`
``` c
int					ft_tolower(int c);
```

*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_tolower.c)*
## ft_toupper
Tranform c into his capital letter

Params:
- c: the letter to change

?> If c isn't a letter or is already capital it will return c

Return value:

The capital letter `(int)`
``` c
int					ft_toupper(int c);
```
*see implementation [here](https://github.com/glegendr/libft/blob/master/src/ft_toupper.c)*
