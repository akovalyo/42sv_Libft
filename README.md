 42sv_Libft - akovalyo

### Summary: 

The aim of this project is to code a C library regrouping usual functions that
will be allowed to use in all other projects.

### Content:

**Part 1 - Libc functions**
 - [x] ft_memset
> 	void *ft_memset(void *s, int c, size_t n);
> DESCRIPTION
>       The  ft_memset() function fills the first n bytes of the memory area pointed
>       to by s with the constant byte c.
> RETURN VALUE
>       The ft_memset() function returns a pointer to the memory area s.

 - [x] ft_bzero

> 	void ft_bzero(void *s, size_t n);
> DESCRIPTION
>       The  function erases the data in the n bytes of the memory start‐
>       ing at the location pointed to by s, by writing zeroes (bytes  containing
>       '\0') to that area.
> RETURN VALUE
>        None.

 - [x] ft_memcpy
> 	void *ft_memcpy(void *dest, const void *src, size_t n);
> DESCRIPTION
>       The  ft_memcpy() function copies n bytes from memory area src to memory area
>       dest.  The memory areas must not overlap.  Use memmove(3) if  the  memory
>       areas do overlap.
> RETURN VALUE
>       The ft_memcpy() function returns a pointer to dest.

 - [x] ft_memccpy
> 	void *memccpy(void *dest, const void *src, int c, size_t n);
> DESCRIPTION
>       The  ft_memccpy()  function copies no more than n bytes from memory area src
>       to memory area dest, stopping when the character c is found.
>       If the memory areas overlap, the results are undefined.
> RETURN VALUE
>       The ft_memccpy() function returns a pointer to the next  character  in  dest
>       after c, or NULL if c was not found in the first n characters of src.

 - [x] ft_memmove
> 	void *ft_memmove(void *dest, const void *src, size_t n);
> DESCRIPTION
>       The ft_memmove() function copies n bytes from memory area src to memory area
>       dest.  The memory areas may overlap: copying takes place  as  though  the
>       bytes  in src are first copied into a temporary array that does not over‐
>       lap src or dest, and the bytes are then copied from the  temporary  array
>       to dest.
> RETURN VALUE
>       The ft_memmove() function returns a pointer to dest.

 - [x] ft_memchr
> 	void *ft_memchr(const void *s, int c, size_t n);
> DESCRIPTION
>       The  ft_memchr()  function  scans  the  initial  n  bytes of the memory area
>       pointed to by s for the first instance of c.  Both c and the bytes of the
>       memory area pointed to by s are interpreted as unsigned char.

 - [x] ft_memcmp
> 	int ft_memcmp(const void *s1, const void *s2, size_t n);
> DESCRIPTION
>       The  memcmp()  function  compares  the first n bytes (each interpreted as
>       unsigned char) of the memory areas s1 and s2.
> RETURN VALUE
>       The memcmp() function returns an integer less than, equal to, or  greater
>       than  zero  if the first n bytes of s1 is found, respectively, to be less
>       than, to match, or be greater than the first n bytes of s2.
> 
>       For a nonzero return value, the sign is determined by  the  sign  of  the
>       difference between the first pair of bytes (interpreted as unsigned char)
>       that differ in s1 and s2.
> 
>       If n is zero, the return value is zero.

 - [x] ft_strlen
> 	size_t ft_strlen(const char *s);
> DESCRIPTION
> 	The  ft_strlen()  function calculates the length of the string pointed to by
>       s, excluding the terminating null byte ('\0').
> RETURN VALUE
>       The ft_strlen() function returns the number  of  characters  in  the  string
>       pointed to by s.

 - [x] ft_strlcpy
> 	size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);
> DESCRIPTION
> 	The ft_strlcpy() function copies up to (size - 1) characters from the NUL-
>	terminated string src to dest, NUL-terminating the result.
> RETURN VALUE
> 	The ft_strlcpy() function returns the total length of the string
>	it tried to create (the length of src). 
 
 - [x] ft_strlcat
>	size_t ft_strlcat(char *dest, const char *src, size_t size);
> DESCRIPTION
>	The strlcat() function appends the NUL-terminated string src to the end of dst.
>	It will append at most size - strlen(dest) - 1 bytes, NUL-terminating the result.
> RETURN VALUE
>	The ft_strlcat() function returns the total length of the string
>	it tried to create (the initial length of dest plus the length of src).

 - [x] ft_strchr
>	char *ft_strchr(const char *s, int c); 
> DESCRIPTION
>	The  ft_strchr()  function  returns a pointer to the first occurrence of the
>	character c in the string s.
> RETURN VALUE
>       The ft_strchr() function returns  a  pointer  to  the  matched
>       character  or  NULL  if the character is not found. The terminating null
>       byte is considered part of the string, so that if c is specified as '\0',
>       this function return a pointer to the terminator.
       
 - [x] ft_strrchr
>	char *ft_strrchr(const char *s, int c);
> DESCRIPTION
> 	The ft_strrchr() function returns a pointer to the last occurrence  of
>	the character c in the string s.
> RETURN VALUE
>       The ft_strrchr() function returns  a  pointer  to  the  matched
>       character  or  NULL  if the character is not found.  The terminating null
>       byte is considered part of the string, so that if c is specified as '\0',
>       this function return a pointer to the terminator.

 - [x] ft_strnstr
>	char	*ft_strnstr(const char *big, const char *little, size_t len);
> DESCRIPTION
>	The ft_strnstr() function locates the	first occurrence of the	null-termi-
>	nated string little in the	string big, where not more than	len characters
>	are searched.  Characters that appear after a '\0' character are not
>	searched.
> RETURN VALUE
>	If little is an empty string, big is returned; if little occurs nowhere
>	in big, NULL is returned; otherwise a pointer to the first character of
>	the first occurrence of little is returned.

 - [x] ft_strncmp
 - [x] ft_atoi
 - [x] ft_isalpha
 - [x] ft_isdigit
 - [x] ft_isalnum 
 - [x] ft_isascii 
 - [x] ft_isprint 
 - [x] ft_toupper 
 - [x] ft_tolower
 - [x] ft_strdup
 - [x] ft_calloc

**Part 2 - Additional functions**

 - [x] ft_substr
 - [x] ft_strjoin
 - [x] ft_strtrim
 - [x] ft_split
 - [x] ft_itoa
 - [x] ft_strmapi
 - [x] ft_putchar_fd
 - [x] ft_putstr_fd
 - [x] ft_putendl_fd
 - [x] ft_putnbr_fd

**Bonus part:**
 - [ ] ft_lstnew
 - [ ] ft_lstadd_front
 - [ ] ft_lstsize
 - [ ] ft_lstlast
 - [ ] ft_lstadd_back
 - [ ] ft_lstdelone
 - [ ] ft_lstclear
 - [ ] ft_lstiter
 - [ ] ft_lstmap

**4. Personal functions:**

 - [x] ft_nbrlen
 - [x] ft_strstr
>	char	*ft_strstr(const char *haystack, const char *needle)
> DESCRIPTION
>	The strstr() function locates the first occurrence of the null-terminated
>	string little in the null-terminated string big.
> RETURN VALUE
>	If little is an empty string, big is returned; if little occurs nowhere
>	in big, NULL is returned; otherwise a pointer to the first character of
>	the first occurrence of little is returned.
 - [x] ft_strcpy
 - [x] ft_strncpy
 - [x] ft_strcat
 - [x] ft_strncat 
 - [x] ft_strcmp
 - [x] ft_memalloc
 - [x] ft_memdel
 - [x] ft_strnew
 - [x] ft_strdel
 - [x] ft_strclr
 - [x] ft_striter
 - [x] ft_striteri
 - [x] ft_strmap
 - [x] ft_strequ
 - [x] ft_strnequ
 - [x] ft_putchar
 - [x] ft_putstr
 - [x] ft_putendl

### Tests:

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
