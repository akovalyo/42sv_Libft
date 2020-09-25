# 42sv_Libft - akovalyo

# Summary: 
Libft with updates

The aim of this project is to code a C library regrouping usual functions that
will be allowed to use in all other projects.


|Libc functions|Additional functions|Bonus functions|Personal functions|
|---|---|---|---|
|[1. ft_bzero](#ft_bzero) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_bzero.c)|[1. ft_itoa](#ft_itoa) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_itoa.c)|[1. ft_lstnew](#ft_lstnew) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstnew.c)|[1. ft_strlcpy](#ft_strlcpy) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strlcpy.c)|
|[2. ft_memchr](#ft_memchr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memchr.c)|[2. ft_memalloc](#ft_memalloc) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memalloc.c)|[2. ft_lstadd_front](#ft_lstadd_front) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstadd_front.c)|[2. ft_calloc](#ft_calloc) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_calloc.c)|
|[3. ft_memcpy](#ft_memcpy) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memcpy.c)|[3. ft_memdel](#ft_memdel) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memdel.c)|[3. ft_lstsize](#ft_lstsize) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstsize.c)|[3. ft_nbrlen](#ft_nbrlen) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_nbrlen.c)|
|[4. ft_memccpy](#ft_memccpy) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memccpy.c)|[4. ft_strclr](#ft_strclr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strclr.c)|[4. ft_lstlast](#ft_lstlast) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstlast.c)|[4. ft_strspn](#ft_strspn) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strspn.c)|
|[5. ft_memcmp](#ft_memcmp) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memcmp.c)|[5. ft_strdel](#ft_strdel) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strdel.c)|[5. ft_lstadd_back](#ft_lstadd_back) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstadd_back.c)|[5. ft_strcspn](#ft_strcspn) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strcspn.c)|
|[6. ft_memmove](#ft_memmove) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memmove.c)|[6. ft_strequ](#ft_strequ) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strequ.c)|[6. ft_lstdelone](#ft_lstdelone) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstdelone.c)|[6. ft_lstsize](#ft_lstsize) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstsize.c)|
|[7. ft_memset](#ft_memset) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_memset.c)|[7. ft_strjoin](#ft_strjoin) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strjoin.c)|[7. ft_lstclear](#ft_lstclear) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstclear.c)|[7. ft_lstlast](#ft_lstlast) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstlast.c)|
|[8. ft_strcat](#ft_strcat) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strcat.c)|[8. ft_strnequ](#ft_strnequ) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strnequ.c)|[8. ft_lstiter](#ft_lstiter) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstiter.c)|[8. ft_lstprint_str](#ft_lstprint_str) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstprint_str.c)|
|[9. ft_strncat](#ft_strncat) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strncat.c)|[9. ft_striter](#ft_striter) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstiter.c)|[9. ft_lstmap](#ft_lstmap) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_lstmap.c)|[9. ft_strsplit_lst](#ft_strsplit_lst) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strsplit_lst.c)|
|[10. ft_strlcat](#ft_strlcat) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strlcat.c)|[10. ft_striteri](#ft_striteri) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_striteri.c)||[10. get_next_line](#get_next_line) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/get_next_line.c)|
|[11. ft_strchr](#ft_strchr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strchr.c)|[11.ft_strmap](#ft_strmap) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strmap.c)||[11. ft_itoa_uns](#ft_itoa_uns) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_itoa_uns.c)|
|[12. ft_strrchr](#ft_strrchr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strrchr.c)|[12. ft_strmapi](#ft_strmapi) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strmapi.c)||[12. ft_itoa_long](#ft_itoa_long) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_itoa_long.c)|
|[13. ft_strcmp](#ft_strcmp) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strcmp.c)|[13. ft_strnew](#ft_strnew) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strnew.c)||[13. ft_straddchr](#ft_straddchr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_straddchr.c)|
|[14. ft_strncmp](#ft_strncmp) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strncmp.c)|[14. ft_strsplit](#ft_strsplit) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strsplit.c)||[14. ft_strchr_ind](#ft_strchr_ind) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strchr_ind.c)|
|[15. ft_strcpy](#ft_strcpy) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strcpy.c)|[15. ft_strsub](#ft_strsub) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strsub.c)||[15. ft_printf](#ft_printf)|
|[16. ft_strncpy](#ft_strncpy) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strncpy.c)|[16. ft_strtrim](#ft_strtrim) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strtrim.c)||[16. ft_strarraylen](#ft_strarraylen) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strarraylen.c)|
|[17. ft_strdup](#ft_strdup) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strdup.c)|[17. ft_putchar](#ft_putchar) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putchar.c)||[17. ft_atof](#ft_atof) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_atof.c)|
|[18. ft_strlen](#ft_strlen) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strlen.c)|[18. ft_putstr](#ft_putstr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putstr.c)||[18.ft_atoi_base](#ft_atoi_base) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_atoi_base.c)|
|[19. ft_strstr](#ft_strstr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strstr.c)|[19. ft_putendl](#ft_putendl) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putendl.c)||[19.ft_realloc](#ft_realloc) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_realloc.c)|
|[20. ft_strnstr](#ft_strnstr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strnstr.c)|[20. ft_putnbr](#ft_putnbr) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putnbr.c)||[20.ft_isspace](#ft_isspace) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_isspace.c)|
|[21. ft_atoi](#ft_atoi) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_atoi.c)|[21. ft_putchar_fd](#ft_putchar_fd) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putchar_fd.c)||[21.ft_strarr_free](#ft_strarr_free) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strarr_free.c)|
|[22. ft_isalpha](#ft_isalpha) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_isalpha.c)|[22. ft_putstr_fd](#ft_putstr_fd) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putstr_fd.c)||[22. ft_strsplit_space](#ft_strsplit_space) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strsplit_space.c)|
|[23. ft_isdigit](#ft_isdigit) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_isdigit.c)|[23. ft_putendl_fd](#ft_putendl_fd) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putnbr_fd.c)||[23. ft_strnequ_alpha](#ft_strnequ_alpha) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_strnequ_alpha.c)|
|[24. ft_isalnum](#ft_isalnum) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_isalnum.c)|[24. ft_putnbr_fd](#ft_putnbr_fd) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_putnbr_fd.c)|||
|[25. ft_isascii](#ft_isascii) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_isascii.c)||||
|[26. ft_isprint](#ft_isprint) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_isprint.c)||||
|[27. ft_toupper](#ft_toupper) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_toupper.c)||||
|[28. ft_tolower](#ft_tolower) [:clipboard:](https://github.com/akovalyo/42sv_Libft/blob/master/srcs/ft_tolower.c)||||

<br>

***

# Content:

## Part 1 - Libc functions

### ft_bzero

>       void ft_bzero(void *s, size_t n);

DESCRIPTION

>       The  function erases the data in the n bytes of the memory start‐
>       ing at the location pointed to by s, by writing zeroes (bytes  containing
>       '\0') to that area.

RETURN VALUE

>       None

### ft_memchr
>       void *ft_memchr(const void *s, int c, size_t n);

DESCRIPTION

>       The  ft_memchr()  function  scans  the  initial  n  bytes of the memory area
>       pointed to by s for the first instance of c.  Both c and the bytes of the
>       memory area pointed to by s are interpreted as unsigned char.

RETURN VALUE

>       The memchr() function returns a pointer to the byte located, or NULL if no 
>       such byte exists within n bytes.

### ft_memcpy
>       void *ft_memcpy(void *dest, const void *src, size_t n);

DESCRIPTION

>       The  ft_memcpy() function copies n bytes from memory area src to memory area
>       dest.  The memory areas must not overlap.  Use memmove(3) if  the  memory
>       areas do overlap.

RETURN VALUE

>       The ft_memcpy() function returns a pointer to dest.

### ft_memccpy
>       void *memccpy(void *dest, const void *src, int c, size_t n);

DESCRIPTION

>       The  ft_memccpy()  function copies no more than n bytes from memory area src
>       to memory area dest, stopping when the character c is found.
>       If the memory areas overlap, the results are undefined.

RETURN VALUE

>       The ft_memccpy() function returns a pointer to the next  character  in  dest
>       after c, or NULL if c was not found in the first n characters of src.

### ft_memcmp
>       int ft_memcmp(const void *s1, const void *s2, size_t n);

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

### ft_memmove
>       void *ft_memmove(void *dst, const void *src, size_t n);

DESCRIPTION

>       The ft_memmove() function copies len bytes from memory area src to memory area
>       dst.  The memory areas may overlap: copying takes place  as  though  the
>       bytes  in src are first copied into a temporary array that does not over‐
>       lap src or dst, and the bytes are then copied from the  temporary  array
>       to dest.

RETURN VALUE

>       The ft_memmove() function returns a pointer to dest.

### ft_memset
>       void *ft_memset(void *s, int c, size_t n);

DESCRIPTION

>       The  ft_memset() function fills the first n bytes of the memory area pointed
>       to by s with the constant byte c.

RETURN VALUE

>       The ft_memset() function returns a pointer to the memory area s.

### ft_strcat
>       char *strcat(char *dest, const char *src);

DESCRIPTION
>       The  strcat()  function  appends  the src string to the dest string, 
>       overwriting the terminating null byte ('\0') at the end of dest, and
>       then adds  a  terminating  null byte.   The  strings may not overlap, 
>       and the dest string must have enough space for the result.  If dest
>       is not large enough, program behavior is unpredictable;  buffer overruns
>       are a favorite avenue for attacking secure programs.

RETURN VALUE

>        The strcat() function returns a pointer to the resulting string dest.

### ft_strncat
>        char *strncat(char *dest, const char *src, size_t n);

DESCRIPTION

>       The strncat() function is similar to strcat(), except that it will use at
>       most n bytes from src; and src does not need to be null-terminated if it 
>       contains n or more bytes. As with strcat(), the resulting string in dest 
>       is always null-terminated. If src contains n or more bytes, strncat()
>       writes n+1 bytes to dest (n from src plus the terminating null byte).
>       Therefore, the size of dest must  be  at  least strlen(dest)+n+1.

RETURN VALUE

>       The strncat() function returns a pointer to the resulting string dest.

### ft_strlcat
>       size_t ft_strlcat(char *dest, const char *src, size_t size);

DESCRIPTION

>       The strlcat() function appends the NUL-terminated string src to the end of dst.
>       It will append at most size - strlen(dest) - 1 bytes, NUL-terminating the result.

RETURN VALUE

>       The ft_strlcat() function returns the total length of the string
>       it tried to create (the initial length of dest plus the length of src).

### ft_strchr
>       char *ft_strchr(const char *s, int c);

DESCRIPTION

>       The ft_strchr() function locates the first occurrence of c (converted to
>       a char) in the string pointed to by s.  The terminating null character is
>       considered to be part of the string; therefore if c is '\0', the functions
>       locate the terminating '\0'.

RETURN VALUE

>       The ft_strchr() function returns a pointer to the located character, or NULL
>       if the character does not appear in the string.
       
### ft_strrchr
>       char *ft_strrchr(const char *s, int c);

DESCRIPTION

>       The ft_strrchr() function is identical to ft_strchr(), except it locates the
>       last occurrence of c.

RETURN VALUE

>       The ft_strchr() function returns a pointer to the located character, or NULL
>       if the character does not appear in the string.

### ft_strcmp
>       ft_strcmp(const char *s1, const char *s2);

DESCRIPTION

>       The ft_strcmp() function lexicographically compares the 
>       null-terminated strings s1 and s2.

RETURN VALUE

>       The ft_strcmp() function returns an integer less  than,  equal
>       to,  or  greater than zero if s1 is found, respectively, to be
>       less than, qto match, or be greater than s2. The comparison is
>       done using unsigned characters, so that `\200' is greater than `\0'.

### ft_strncmp

>       int ft_strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION

>       The ft_strncmp() function is similar to ft_srcmp(), except it 
>       compares only the first (at most) n bytes of s1 and s2. The 
>       comparison is done using unsigned characters, so that `\200'
>       is greater than `\0'.

RETURN VALUE

>       The ft_strncmp() function returns an integer less  than,  equal
>       to,  or  greater than zero if the first n bytes of s1 is found,
>       respectively, to be less than, to match, or be greater than s2.

### ft_strcpy
>       char *strcpy(char *dest, const char *src);

DESCRIPTION

>       The strcpy() function copies the string pointed to by src, including the
>       terminating null byte ('\0'), to the buffer pointed to by dest.  The strings
>       may  not  overlap, and the destination string dest must be large enough to
>       receive the copy.  Beware of buffer overruns!

RETURN VALUE

>       The  strcpy() function returns a pointer to the destination string dest.

### ft_strncpy
>       char *strncpy(char *dest, const char *src, size_t n);

DESCRIPTION

>       The strncpy() function is similar, except that at most n bytes of  src  are
>       copied. Warning:  If there is no null byte among the first n bytes of src, the
>       string placed in dest will not be null-terminated. If the length of src is less
>       than n, strncpy() writes additional null bytes to  dest to ensure that a total
>       of n bytes are written.

RETURN VALUE

>       The  strncpy() function returns a pointer to the destination string dest.

### ft_strdup
>       char *ft_strdup(const char *s);

DESCRIPTION

>       The ft_strdup() function returns a pointer to a new string which is a
>       duplicate of the string s.  Memory for the new string is  obtained
>       with  malloc(3), and can be freed with free(3).

RETURN VALUE

>       On  success,  the  ft_strdup() function returns a pointer to the 
>       duplicated string. It returns NULL if insufficient memory was available

### ft_strlen
>       size_t ft_strlen(const char *s);

DESCRIPTION

>       The  ft_strlen()  function calculates the length of the string pointed to by
>       s, excluding the terminating null byte ('\0').

RETURN VALUE

>       The ft_strlen() function returns the number  of  characters  in  the  string
>       pointed to by s.

### ft_strstr
>       char *ft_strstr(const char *haystack, const char *needle);

DESCRIPTION

>       The strstr() function locates the first occurrence of the null-terminated
>       string needle in the null-terminated string haystack.

RETURN VALUE

>       If needle is an empty string, haystack is returned; if needle occurs nowhere
>       in haystack, NULL is returned; otherwise a pointer to the first character of
>       the first occurrence of needle is returned.

### ft_strnstr
>       char *strnstr(const char *haystack, const char *needle, size_t len);

DESCRIPTION

>       The ft_strnstr() function locates the first occurrence of the null-termi-
>       nated string little in the string big, where not more than len characters
>       are searched.  Characters that appear after a '\0' character are not
>       searched.

RETURN VALUE

>       If little is an empty string, big is returned; if little occurs nowhere
>       in big, NULL is returned; otherwise a pointer to the first character of
>       the first occurrence of little is returned.

### ft_atoi
>       int atoi(const char *nptr);

DESCRIPTION

>       The ft_atoi() function converts the initial portion of the string pointed to
>       by nptr to int.

RETURN VALUE

>       The converted value.

### ft_isalpha
>       int ft_isalpha(int c);

DESCRIPTION

>       Checks for an alphabetic character; in the standard "C" locale

### ft_isdigit
>       int ft_isdigit(int c);

DESCRIPTION
>       Checks for an alphabetic character; in the standard "C" locale


### ft_isalnum
>       int ft_isalnum(int c);

DESCRIPTION

>       Checks  for  an alphanumeric character

### ft_isascii
>       int ft_isascii(int c);

DESCRIPTION

>       Checks whether c is a 7-bit unsigned char value that fits into the
>       ASCII character set

### ft_isprint
>       int ft_isprint(int c);

DESCRIPTION

>       Checks for any printable character including space.

RETURN VALUE for **22-26**

>       The values returned are nonzero if the character c falls into the  tested
>       class, and zero if not.

### ft_toupper
>       int ft_toupper(int c);

DESCRIPTION

>       This function converts lowercase letters to uppercase. If c is a lowercase
>       letter, ft_toupper() returns its uppercase equivalent, if an uppercase
>       representation exists in the current locale. Otherwise, it returns c.

### ft_tolower
>       int ft_tolower(int c);

DESCRIPTION

>       This function converts uppercase letters to lowercase. If c is a uppercase
>       letter, ft_tolower() returns its lowercase equivalent, if an lowercase
>       representation exists in the current locale. Otherwise, it returns c.

___

## Part 2 - Additional functions

### ft_itoa
>       char *ft_itoa(int n);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a string representing the
>       integer received as an argument. Negative numbers must be handled.

RETURN VALUE

>       The string representing the integer. NULL if the allocation fails.

### ft_memalloc
>       void * ft_memalloc(size_t size);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a “fresh” memory area. The
>       memory allocated is initialized to 0. If the allocation fails, the
>       function returns NULL.

RETURN VALUE

>       The allocated memory area.

### ft_memdel
>       void ft_memdel(void **ap);

DESCRIPTION

>       Takes as a parameter the address of a memory area that needs to be
>       freed with free(3), then puts the pointer to NULL.

RETURN VALUE

>       None

### ft_strclr
>       void ft_strclr(char *s);

DESCRIPTION

>       Sets every character of the string to the value ’\0’.

RETURN VALUE

>       None

### ft_strdel
>       void ft_strdel(char **as);

DESCRIPTION

>       Takes as a parameter the address of a string that need to be freed
>       with free(3), then sets its pointer to NULL.

RETURN VALUE

>       None

### ft_strequ
>       int ft_strequ(char const *s1, char const *s2);

DESCRIPTION

>       Lexicographical comparison between s1 and s2. If the 2 strings are 
>       identical the function returns 1, or 0 otherwise.

RETURN VALUE

>       1 or 0 according to if the 2 strings are identical or not.

### ft_strjoin

>       char *ft_strjoin(char const *s1, char const *s2);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a new string, result of 
>       the concatenation of s1 and s2.

RETURN VALUE

>       The new string. NULL if the allocation fails.

### ft_strnequ
>       int ft_strnequ(char const *s1, char const *s2, size_t n);

DESCRIPTION

>       Lexicographical comparison between s1 and s2 up to n characters or  
>       until a ’\0’ is reached. If the 2 strings are identical, the function 
>       returns 1, or 0 otherwise.

RETURN VALUE

>       1 or 0 according to if the 2 strings are identical or not.

### ft_striter
>       void ft_striter(char *s, void (*f)(char *));

DESCRIPTION

>       Applies the function f to each character of the string passed as argument.
>       Each character is passed by address to f to be modified if necessary.

RETURN VALUE

>       None

### ft_striteri
>       void ft_striteri(char *s, void (*f)(unsigned int, char *));

DESCRIPTION

>       Applies the function f to each character of the string passed as argument,
>       and passing its index as first argument. Each character is passed by 
>       address to f to be modified if necessary.

RETURN VALUE

>       None

### ft_strmap
>       char * ft_strmap(char const *s, char (*f)(char));

DESCRIPTION

>       Applies the function f to each character of the string given as 
>       argument to create a “fresh” new string (with malloc(3)) resulting 
>       from the successive applications of f.

RETURN VALUE

>       The “fresh” string created from the successive applications off.

### ft_strmapi
>       char *ft_strmapi(char *s, void (*f)(unsigned int, char));

DESCRIPTION

>       Applies the function f to each character of the string passedas argument
>       by giving its index as first argument to create a “fresh” new string
>       (with malloc(3)) resulting from the successive applications of f.

RETURN VALUE

>       The string created from the successive applications of f.
>       Returns NULL if the allocation fails.

### ft_strnew
>       char * ft_strnew(size_t size);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a “fresh” string ending with
>       ’\0’. Each character of the string is initialized at ’\0’. If the
>       allocation fails the function returns NULL.

RETURN VALUE

>       The string allocated and initialized to 0.

### ft_strsplit
>       char **ft_strsplit(char const *s, char c);

DESCRIPTION

>       Allocates (with malloc(3)) and returns an array of strings obtained
>       by splitting s using the character c as a delimiter. The array must
>       be ended by a NULL pointer.

RETURN VALUE

>       The array of new strings result of the split. NULL if the allocation
>       fails.

### ft_strsub
>       char	*ft_substr(char const *s, unsigned int start, size_t len);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a substring from the string
>       given in argument. The substring begins at index ’start’ and is of
>       maximum size ’len’. If start and Len aren't referring to a valid 
>       substring, the behavior is undefined. If the allocation fails, the
>       function retuns NULL.

RETURN VALUE

>       The substring. NULL if the allocation fails.

### ft_strtrim
>       char *ft_strtrim(char const *s1);

DESCRIPTION
>       Allocates (with malloc(3)) and returns a copy of the string given
>       as argument without without space chatacters
>       at the beginning and the end of the string.

RETURN VALUE

>       The trimmed string. NULL if the allocation fails.

### ft_putchar
>       void ft_putchar(char c);

DESCRIPTION

>       Outputs the character c to the standard output.

RETURN VALUE

>       None

### ft_putstr
>       void ft_putstr(char const *s);

DESCRIPTION

>       Outputs the string s to the standard output.

RETURN VALUE

>       None

### ft_putendl
>       void ft_putendl(char *s);

DESCRIPTION

>       Outputs the string s to the standard output, followed by a newline.

RETURN VALUE

>       None

### ft_putnbr
>       void ft_putnbr(int n);

DESCRIPTION

>       Outputs the integer n to the standard output.

RETURN VALUE

>       None

### ft_putchar_fd
>       void ft_putchar_fd(char c, int fd);

DESCRIPTION

>       Outputs the character c to given file descriptor.

RETURN VALUE

>       None

### ft_putstr_fd
>       void ft_putstr_fd(char *s, int fd);

DESCRIPTION

>       Outputs the string c to given file descriptor.

RETURN VALUE

>       None

### ft_putendl_fd
>       void ft_putendl_fd(char *s, int fd);

DESCRIPTION

>       Outputs the string c to given file descriptor, followed by a newline.

RETURN VALUE

>       None

### ft_putnbr_fd

>       void ft_putnbr_fd(int n, int fd);

DESCRIPTION

>       Outputs the integer 'n' to the given file descriptor.

RETURN VALUE

>       None
___

## Bonus part:

### ft_lstnew
>       t_list *ft_lstnew(void *content);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a new element. 
>       The variable ’content’ is initialized with the value
>       of the parameter ’content’. The variable ’next’ is
>       initialized to NULL.

RETURN VALUE

>       The new element.

### ft_lstadd_front
>       void ft_lstadd_front(t_list **lst, t_list *new);

DESCRIPTION

>       Adds the element ’new’ at the beginning of the list.

RETURN VALUE

>       None


### ft_lstsize
>       int ft_lstsize(t_list *lst);

DESCRIPTION

>       Counts the number of elements in a list.

RETURN VALUE

>       Length of the list.


### ft_lstlast
>       t_list *ft_lstlast(t_list *lst);

DESCRIPTION

>       Returns the last element of the list.

RETURN VALUE

>       Last element of the list.


### ft_lstadd_back
>       void ft_lstadd_back(t_list **lst, t_list *new);

DESCRIPTION

>       Adds the element ’new’ at the end of the list.

RETURN VALUE

>       None


### ft_lstdelone
>       void ft_lstdelone(t_list *lst, void (*del)(void*));

DESCRIPTION

>       Takes as a parameter an element and frees the memory
>       of the element’s content using the function ’del’ 
>       given as a parameter and free the element. The memory
>       of ’next’ must not be freed.

RETURN VALUE

>       None

### ft_lstclear
>       void ft_lstdel(t_list **lst, void (*del)(void *));

DESCRIPTION

>       Deletes and frees the given element and every successor
>       of that element, using the function ’del’ and free(3).
>       Finally, the pointer to the list must be set to NULL.

RETURN VALUE

>       None


### ft_lstiter
>       void ft_lstiter(t_list *lst, void (*f)(void *));

DESCRIPTION

>       Iterates the list ’lst’ and applies the function ’f’
>       to the content of each element.

RETURN VALUE

>       None

### ft_lstmap
>       t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

DESCRIPTION

>       Iterates the list ’lst’ and applies the function ’f’ to
>       the content of each element. Creates a new list resulting
>       of the successive applications of the function ’f’. The
>       ’del’ function is used to delete the content of an element
>       if needed.

RETURN VALUE

>       The new list. NULL if the allocation fails.

___

## 4. Personal functions:

### ft_strlcpy
>       size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);

DESCRIPTION

>       The ft_strlcpy() function copies up to (size - 1) characters from 
>       the NUL-terminated string src to dest, NUL-terminating the result.

RETURN VALUE

>       The ft_strlcpy() function returns the total length of the string
>       it tried to create (the length of src). 
 

### ft_calloc
>       void *calloc(size_t nmemb, size_t size);

DESCRIPTION

>       The  calloc() function allocates memory for an array of nmemb 
>       elements of size bytes each and returns a pointer to the allocated 
>       memory.  The  memory  is set to zero.  If nmemb or size is 0, then 
>       calloc() returns either NULL, or a unique pointer value that can 
>       later be successfully passed to free().

RETURN VALUE

>       The calloc() function returns a  pointer  to  the  allocated
>       memory, which is suitably aligned for any built-in type.  On error, 
>       it returns NULL. NULL may also be returned by a successful call to 
>       calloc() with nmemb or size equal to zero.

### ft_nbrlen
>       int ft_nbrlen(long n);

DESCRIPTION

>       The ft_nbrlen functions returns the length of number

### ft_strspn
>       size_t strspn(const char *s, const char *accept);

DESCRIPTION

>       The  ft_strspn()  function calculates the length (in bytes) of the 
>       initial segment of s which consists entirely of bytes in accept.

RETURN VALUE

>       The  strspn()  function returns the number of bytes in the 
>       initial segment of s which consist only of bytes from accept.

### ft_strcspn
>       size_t strcspn(const char *s, const char *reject);

DESCRIPTION

>       The strcspn() function calculates the length of the initial
>       segment  of s which consists entirely of bytes not in reject.

RETURN VALUE

>        The strcspn() function returns the number of bytes in the
>        initial  segment of s which are not in the string reject.

RETURN VALUE

>       None

### ft_lstsize
>       int ft_lstsize(t_list *lst);

DESCRIPTION

>       Counts the number of elements in a list.

RETURN VALUE

>       Length of the list.

### ft_lstlast
>       t_list *ft_lstlast(t_list *lst);

DESCRIPTION

>       Returns the last element of the list.

RETURN VALUE

>       Last element of the list.

### ft_lstprint_str
>       void ft_lstprint_str(t_list *lst)


DESCRIPTION

>       Prints contents (string) of linked list starting from head.

### ft_strsplit_lst
>       t_list	*ft_strsplit_lst(char const *s, char c)


DESCRIPTION

>       Allocates (with malloc) and returns a linked list of "fresh" 
>       strings (all ending with '\0') obtained by spliting s using 
>       the character c as a delimiter.

RETURN VALUE

>       Returns a list of strings.

### get_next_line

>       int		get_next_line(int fd, char **line)


DESCRIPTION

>       Returns a line read from file descriptor **fd**. **line** is the address
>       of a pointer to a character that is used to save the line read from the
>       file descriptor. Result line is without ’\n’.

RETURN VALUE

>       The return value can be **1, 0 or -1** depending on whether a line has 
>       been read, when the reading has been completed, or if an error has happened
>       respectively.

### ft_itoa_uns

### ft_itoa_long

### ft_straddchr

>       char	*ft_straddchr(char *str, char ch)

DESCRIPTION

>       Returns a pointer to a new string which is copy of string str
>       and appended char *ch*, ending with null byte. Memory for the
>       new string is  obtained with  malloc(3), and can be freed with free(3).
>       If str is not exists, returns pointer to a new string with *ch*,
>       ending with null byte.

RETURN VALUE

>       Pointer to a new string

### ft_strchr_ind

>       int	ft_strchr_ind(const char *s, char c)

DESCRIPTION

>       The function locates the first occurrence of char c in the string pointed
>       to by s.  The terminating null character is considered to be part of the
>       string; therefore if c is '\0', the functions locate the terminating '\0'.

RETURN VALUE

>       The ft_strchr_ind() function returns index of the located character in the 
>       string, or -1 if the character does not appear in the string.

### ft_printf

>       int printf (const char *format, ... );

DESCRIPTION

>       Writes the C string pointed by format to the standard output (stdout). If 
>       format includes format specifiers (subsequences beginning with %), the 
>       additional arguments following format are formatted and inserted in the
>       resulting string replacing their respective specifiers.


RETURN VALUE

>       On success, the total number of characters written is returned.

PARAMETERS

A format specifier follows this prototype:

>       %[flags][width][.precision]specifier

specifier | Output
--- | ---
d or i | Signed decimal integer
u | Unsigned decimal integer
p | Pointer address
x | Unsigned hexadecimal integer
X | Unsigned hexadecimal integer (uppercase)
c | Character
s | String of characters
% | A % followed by another % character will write a single % to the stream.

___

flags | Description
--- | ---
`-` | Left-justify within the given field width; Right justification is the default
0 | Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).

___

width | Description
--- | ---
(number) | Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.
`*` | The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.

___

.precision | Description
--- | ---
.number | **For integer specifiers (d, i, u, x, X)**: precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. **For s:** this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. **If the period is** specified without an explicit value for precision, 0 is assumed.
.* | The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.

___

### ft_strarraylen

>       size_t	ft_strarraylen(char **arr)

DESCRIPTION

>       The  function calculates the length of the array of strings, excluding
>       the terminating null.

RETURN VALUE

>       Returns the number of string in the array


### ft_atof

>       float	ft_atof(char *nptr)

DESCRIPTION

>       Converts the initial portion of the string pointed to by nptr to float.

RETURN VALUE

>       The converted value.

### ft_atoi_base

>       int	ft_atoi_base(char *str, char *base)

DESCRIPTION

>       Converts the initial portion of the string pointed to by str to integer. 
>       The string reveals the number in a specific base, given as a second parameter

RETURN VALUE

>       The converted value.

### ft_realloc

>       int	ft_realloc(char *ptr, size_t size)

DESCRIPTION

>       Tries to change the size of the allocation pointed to by ptr to size, and
>       returns pointer to the allocated memory. If ptr is NULL, ft_realloc() is 
>       identical to a call to ft_memalloc() for size bytes.

RETURN VALUE

>       Pointer to the allocated memory

### ft_isspace

### ft_strsplit_space

>       char **ft_strsplit_space(char const *s);

DESCRIPTION

>       Allocates (with malloc(3)) and returns an array of strings obtained
>       by splitting s using "space" characters (space, \t, \r, \f)  as a delimiter. 
>       The array must be ended by a NULL pointer.

RETURN VALUE

>       The array of new strings result of the split. NULL if the allocation fails.

### ft_strarr_free

>       void ft_strarr_free(char **tab, int len);

DESCRIPTION

>       Frees array of strings

### ft_strsplit_space

>       char **ft_strsplit_space(char const *s);

DESCRIPTION

>       Allocates (with malloc(3)) and returns an array of strings obtained
>       by splitting s using "space" characters (space, \t, \r, \f)  as a delimiter. 
>       The array must be ended by a NULL pointer.

RETURN VALUE

>       The array of new strings result of the split. NULL if the allocation fails.


### ft_strnequ_alpha

>       int		ft_strnequ_alpha(const char *s1, const char *s2, size_t n);

DESCRIPTION

>       Comparison between s1 and s2 up to n characters until a ’\0’ is reached
>       ignoring case.

RETURN VALUE

>       Returns 0 if 2 strings are identical, or 1 otherwise.   

