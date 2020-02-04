 42sv_Libft - akovalyo

# Summary: 

The aim of this project is to code a C library regrouping usual functions that
will be allowed to use in all other projects.

# Content:

## Part 1 - Libc functions

### 1. ft_memset
>	void *ft_memset(void *s, int c, size_t n);

DESCRIPTION

>	The  ft_memset() function fills the first n bytes of the memory area pointed
>	to by s with the constant byte c.

RETURN VALUE

>	The ft_memset() function returns a pointer to the memory area s.

### 2. ft_bzero

>	void ft_bzero(void *s, size_t n);

DESCRIPTION

>	The  function erases the data in the n bytes of the memory start‐
>       ing at the location pointed to by s, by writing zeroes (bytes  containing
>       '\0') to that area.

RETURN VALUE

>        None.

### 3. ft_memcpy
>	void *ft_memcpy(void *dest, const void *src, size_t n);

DESCRIPTION

>       The  ft_memcpy() function copies n bytes from memory area src to memory area
>       dest.  The memory areas must not overlap.  Use memmove(3) if  the  memory
>       areas do overlap.

RETURN VALUE

>       The ft_memcpy() function returns a pointer to dest.

### 4. ft_memccpy
>	void *memccpy(void *dest, const void *src, int c, size_t n);

DESCRIPTION

>       The  ft_memccpy()  function copies no more than n bytes from memory area src
>       to memory area dest, stopping when the character c is found.
>       If the memory areas overlap, the results are undefined.

RETURN VALUE

>       The ft_memccpy() function returns a pointer to the next  character  in  dest
>       after c, or NULL if c was not found in the first n characters of src.

### 5. ft_memmove
>	void *ft_memmove(void *dest, const void *src, size_t n);

DESCRIPTION

>       The ft_memmove() function copies n bytes from memory area src to memory area
>       dest.  The memory areas may overlap: copying takes place  as  though  the
>       bytes  in src are first copied into a temporary array that does not over‐
>       lap src or dest, and the bytes are then copied from the  temporary  array
>       to dest.

RETURN VALUE

>       The ft_memmove() function returns a pointer to dest.

### 6. ft_memchr
>	void *ft_memchr(const void *s, int c, size_t n);

DESCRIPTION

>       The  ft_memchr()  function  scans  the  initial  n  bytes of the memory area
>       pointed to by s for the first instance of c.  Both c and the bytes of the
>       memory area pointed to by s are interpreted as unsigned char.

### 7. ft_memcmp
>	int ft_memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION

>       The  memcmp()  function  compares  the first n bytes (each interpreted as
>       unsigned char) of the memory areas s1 and s2.

RETURN VALUE

>       The memcmp() function returns an integer less than, equal to, or  greater
>       than  zero  if the first n bytes of s1 is found, respectively, to be less
>       than, to match, or be greater than the first n bytes of s2.



>       For a nonzero return value, the sign is determined by  the  sign  of  the
>       difference between the first pair of bytes (interpreted as unsigned char)
>       that differ in s1 and s2.



>       If n is zero, the return value is zero.

### 8. ft_strlen
>	size_t ft_strlen(const char *s);

DESCRIPTION

> 	The  ft_strlen()  function calculates the length of the string pointed to by
>       s, excluding the terminating null byte ('\0').

RETURN VALUE

>       The ft_strlen() function returns the number  of  characters  in  the  string
>       pointed to by s.

### 9. ft_strlcpy
>	size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);

DESCRIPTION

> 	The ft_strlcpy() function copies up to (size - 1) characters from the NUL-
>	terminated string src to dest, NUL-terminating the result.

RETURN VALUE

> 	The ft_strlcpy() function returns the total length of the string
>	it tried to create (the length of src). 
 
### 10. ft_strlcat
>	size_t ft_strlcat(char *dest, const char *src, size_t size);

DESCRIPTION

>	The strlcat() function appends the NUL-terminated string src to the end of dst.
>	It will append at most size - strlen(dest) - 1 bytes, NUL-terminating the result.

RETURN VALUE

>	The ft_strlcat() function returns the total length of the string
>	it tried to create (the initial length of dest plus the length of src).

### 11. ft_strchr
>	char *ft_strchr(const char *s, int c);

DESCRIPTION

>	The  ft_strchr()  function  returns a pointer to the first occurrence of the
>	character c in the string s.

RETURN VALUE

>       The ft_strchr() function returns  a  pointer  to  the  matched
>       character  or  NULL  if the character is not found. The terminating null
>       byte is considered part of the string, so that if c is specified as '\0',
>       this function return a pointer to the terminator.
       
### 12. ft_strrchr
>	char *ft_strrchr(const char *s, int c);

DESCRIPTION

> 	The ft_strrchr() function returns a pointer to the last occurrence  of
>	the character c in the string s.

RETURN VALUE

>       The ft_strrchr() function returns  a  pointer  to  the  matched
>       character  or  NULL  if the character is not found.  The terminating null
>       byte is considered part of the string, so that if c is specified as '\0',
>       this function return a pointer to the terminator.

### 13. ft_strnstr
>	char	*ft_strnstr(const char *big, const char *little, size_t len);

DESCRIPTION

>	The ft_strnstr() function locates the	first occurrence of the	null-termi-
>	nated string little in the	string big, where not more than	len characters
>	are searched.  Characters that appear after a '\0' character are not
>	searched.

RETURN VALUE

>	If little is an empty string, big is returned; if little occurs nowhere
>	in big, NULL is returned; otherwise a pointer to the first character of
>	the first occurrence of little is returned.

### 14. ft_strncmp
### 15. ft_atoi
### 16. ft_isalpha
### 17. ft_isdigit
### 18. ft_isalnum 
### 19. ft_isascii 
### 20. ft_isprint 
### 21. ft_toupper 
### 22. ft_tolower
### 23. ft_strdup
### 24. ft_calloc

## Part 2 - Additional functions

### 1. ft_substr
### 2. ft_strjoin
### 3. ft_strtrim
### 4. ft_split
### 5. ft_itoa
### 6. ft_strmapi
### 7. ft_putchar_fd
### 8. ft_putstr_fd
### 9. ft_putendl_fd
### 10. ft_putnbr_fd

## Bonus part:

### 1. ft_lstnew
### 2. ft_lstadd_front
### 3. ft_lstsize
### 4. ft_lstlast
### 5. ft_lstadd_back
### 6. ft_lstdelone
### 7. ft_lstclear
### 8. ft_lstiter
### 9. ft_lstmap

## 4. Personal functions:

### 1. ft_nbrlen
### 2. ft_strstr
>	char	*ft_strstr(const char *haystack, const char *needle)

DESCRIPTION

>	The strstr() function locates the first occurrence of the null-terminated
>	string little in the null-terminated string big.

RETURN VALUE

>	If little is an empty string, big is returned; if little occurs nowhere
>	in big, NULL is returned; otherwise a pointer to the first character of
>	the first occurrence of little is returned.

### 3. ft_strcpy
### 4. ft_strncpy
### 5. ft_strcat
### 6. ft_strncat 
### 7. ft_strcmp
### 8. ft_memalloc
### 9. ft_memdel
### 10. ft_strnew
### 11. ft_strdel
### 12. ft_strclr
### 13. ft_striter
### 14. ft_striteri
### 15. ft_strmap
### 16. ft_strequ
### 17. ft_strnequ
### 18. ft_putchar
### 19. ft_putstr
### 20. ft_putendl

## Tests:

Put *libft.h* and *libft.a* in the folder **test** and run 
```bash
make part1
```

```bash
make part2
```

```bash
make all
```

There should be no errors (segmentation fault, etc).

There is no tests for *ft_calloc*, *ft_***_fd*  (test only for allocation memory failure)
