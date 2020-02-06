 42sv_Libft - akovalyo

# Summary: 

The aim of this project is to code a C library regrouping usual functions that
will be allowed to use in all other projects.

***

# Content:

## Part 1 - Libc functions

### 1. ft_memset
>       void *ft_memset(void *s, int c, size_t n);

DESCRIPTION

>       The  ft_memset() function fills the first n bytes of the memory area pointed
>       to by s with the constant byte c.

RETURN VALUE

>       The ft_memset() function returns a pointer to the memory area s.

### 2. ft_bzero

>       void ft_bzero(void *s, size_t n);

DESCRIPTION

>       The  function erases the data in the n bytes of the memory start‐
>       ing at the location pointed to by s, by writing zeroes (bytes  containing
>       '\0') to that area.

RETURN VALUE

>       None

### 3. ft_memcpy
>       void *ft_memcpy(void *dest, const void *src, size_t n);

DESCRIPTION

>       The  ft_memcpy() function copies n bytes from memory area src to memory area
>       dest.  The memory areas must not overlap.  Use memmove(3) if  the  memory
>       areas do overlap.

RETURN VALUE

>       The ft_memcpy() function returns a pointer to dest.

### 4. ft_memccpy
>       void *memccpy(void *dest, const void *src, int c, size_t n);

DESCRIPTION

>       The  ft_memccpy()  function copies no more than n bytes from memory area src
>       to memory area dest, stopping when the character c is found.
>       If the memory areas overlap, the results are undefined.

RETURN VALUE

>       The ft_memccpy() function returns a pointer to the next  character  in  dest
>       after c, or NULL if c was not found in the first n characters of src.

### 5. ft_memmove
>       void *ft_memmove(void *dest, const void *src, size_t n);

DESCRIPTION

>       The ft_memmove() function copies n bytes from memory area src to memory area
>       dest.  The memory areas may overlap: copying takes place  as  though  the
>       bytes  in src are first copied into a temporary array that does not over‐
>       lap src or dest, and the bytes are then copied from the  temporary  array
>       to dest.

RETURN VALUE

>       The ft_memmove() function returns a pointer to dest.

### 6. ft_memchr
>       void *ft_memchr(const void *s, int c, size_t n);

DESCRIPTION

>       The  ft_memchr()  function  scans  the  initial  n  bytes of the memory area
>       pointed to by s for the first instance of c.  Both c and the bytes of the
>       memory area pointed to by s are interpreted as unsigned char.

### 7. ft_memcmp
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

### 8. ft_strlen
>       size_t ft_strlen(const char *s);

DESCRIPTION

>       The  ft_strlen()  function calculates the length of the string pointed to by
>       s, excluding the terminating null byte ('\0').

RETURN VALUE

>       The ft_strlen() function returns the number  of  characters  in  the  string
>       pointed to by s.

### 9. ft_strlcpy
>       size_t ft_strlcpy(char *dest, const char *src, size_t dstsize);

DESCRIPTION

>       The ft_strlcpy() function copies up to (size - 1) characters from the NUL-
>       terminated string src to dest, NUL-terminating the result.

RETURN VALUE

>       The ft_strlcpy() function returns the total length of the string
>       it tried to create (the length of src). 
 
### 10. ft_strlcat
>       size_t ft_strlcat(char *dest, const char *src, size_t size);

DESCRIPTION

>       The strlcat() function appends the NUL-terminated string src to the end of dst.
>       It will append at most size - strlen(dest) - 1 bytes, NUL-terminating the result.

RETURN VALUE

>       The ft_strlcat() function returns the total length of the string
>       it tried to create (the initial length of dest plus the length of src).

### 11. ft_strchr
>       char *ft_strchr(const char *s, int c);

DESCRIPTION

>       The  ft_strchr()  function  returns a pointer to the first occurrence of the
>       character c in the string s.

RETURN VALUE

>       The ft_strchr() function returns  a  pointer  to  the  matched
>       character  or  NULL  if the character is not found. The terminating null
>       byte is considered part of the string, so that if c is specified as '\0',
>       this function return a pointer to the terminator.
       
### 12. ft_strrchr
>       char *ft_strrchr(const char *s, int c);

DESCRIPTION

>       The ft_strrchr() function returns a pointer to the last occurrence  of
>       the character c in the string s.

RETURN VALUE

>       The ft_strrchr() function returns  a  pointer  to  the  matched
>       character  or  NULL  if the character is not found.  The terminating null
>       byte is considered part of the string, so that if c is specified as '\0',
>       this function return a pointer to the terminator.

### 13. ft_strnstr
>       char	*ft_strnstr(const char *big, const char *little, size_t len);

DESCRIPTION

>       The ft_strnstr() function locates the	first occurrence of the	null-termi-
>       nated string little in the	string big, where not more than	len characters
>       are searched.  Characters that appear after a '\0' character are not
>       searched.

RETURN VALUE

>       If little is an empty string, big is returned; if little occurs nowhere
>       in big, NULL is returned; otherwise a pointer to the first character of
>       the first occurrence of little is returned.

### 14. ft_strncmp

>       int ft_strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION

>       The ft_strncmp() function is similar, except it compares only the first
>       (at most) n bytes of s1 and s2.

RETURN VALUE

>       The ft_strcmp() function returns an integer less  than,  equal
>       to,  or  greater than zero if s1 is found,
>       respectively, to be less than, to match, or be greater than s2.

### 15. ft_atoi
>       int atoi(const char *nptr);

DESCRIPTION

>       The ft_atoi() function converts the initial portion of the string pointed to
>       by nptr to int.

RETURN VALUE

>       The converted value.

### 16. ft_isalpha
>       int ft_isalpha(int c);

DESCRIPTION

>       Checks for an alphabetic character; in the standard "C" locale

### 17. ft_isdigit
>       int ft_isdigit(int c);

DESCRIPTION
>       Checks for an alphabetic character; in the standard "C" locale


### 18. ft_isalnum
>       int ft_isalnum(int c);

DESCRIPTION

>       Checks  for  an alphanumeric character

### 19. ft_isascii
>       int ft_isascii(int c);

DESCRIPTION

>       Checks whether c is a 7-bit unsigned char value that fits into the
>       ASCII character set

### 20. ft_isprint
>       int ft_isprint(int c);

DESCRIPTION

>       Checks for any printable character including space.

RETURN VALUE for **16-20**

>       The values returned are nonzero if the character c falls into the  tested
>       class, and zero if not.

### 21. ft_toupper
>       int ft_toupper(int c);

DESCRIPTION

>       This function converts lowercase letters to uppercase. If c is a lowercase
>       letter, ft_toupper() returns its uppercase equivalent, if an uppercase
>       representation exists in the current locale. Otherwise, it returns c.

### 22. ft_tolower
>       int ft_tolower(int c);

DESCRIPTION

>       This function converts uppercase letters to lowercase. If c is a uppercase
>       letter, ft_tolower() returns its lowercase equivalent, if an lowercase
>       representation exists in the current locale. Otherwise, it returns c.

### 23. ft_strdup
>       char *ft_strdup(const char *s);

DESCRIPTION

>       The ft_strdup() function returns a pointer to a new string which is a
>       duplicate of the string s.  Memory for the new string is  obtained
>       with  malloc(3), and can be freed with free(3).

RETURN VALUE

>       On  success,  the  ft_strdup() function returns a pointer to the 
>       duplicated string. It returns NULL if insufficient memory was available

### 24. ft_calloc
>       void *calloc(size_t nmemb, size_t size);

DESCRIPTION

>       The  calloc() function allocates memory for an array of nmemb elements of
>       size bytes each and returns a pointer to the allocated memory.  The  mem‐
>       ory  is set to zero.  If nmemb or size is 0, then calloc() returns either
>       NULL, or a unique pointer value that can later be successfully passed  to
>       free().

RETURN VALUE

>       The calloc() function returns a  pointer  to  the  allocated
>       memory, which is suitably aligned for any built-in type.  On error, it
>       returns NULL. NULL may also be returned by a successful call to calloc()
>       with nmemb or size equal to zero.
___

## Part 2 - Additional functions

### 1. ft_substr
>       char	*ft_substr(char const *s, unsigned int start, size_t len);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a substringfrom the string
>       given in argument. The substring begins at index ’start’ and is of
>       maximum size ’len’.

RETURN VALUE

>       The substring. NULL if the allocation fails.

### 2. ft_strjoin

>       char *ft_strjoin(char const *s1, char const *s2);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a new string, result of 
>       the concatenation of s1 and s2.

RETURN VALUE

>       The new string. NULL if the allocation fails.

### 3. ft_strtrim
>       char *ft_strtrim(char const *s1, char const *set);

DESCRIPTION
>       Allocates (with malloc(3)) and returns a copy of the string given
>       as argument without the characters specified in the set argument
>       at the beginning andthe end of the string.

RETURN VALUE

>       The trimmed string. NULL if the allocation fails.


### 4. ft_split
>       char **ft_split(char const *s, char c);

DESCRIPTION

>       Allocates (with malloc(3)) and returns an array of strings obtained
>       by splitting s using the character c as a delimiter. The array must
>       be ended by a NULL pointer.

RETURN VALUE

>       The array of new strings result of the split. NULL if the allocation
>       fails.

### 5. ft_itoa
>       char *ft_itoa(int n);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a string representing the
>       integer received as an argument. Negative numbers must be handled.

RETURN VALUE

>       The string representing the integer. NULL if the allocation fails.

### 6. ft_strmapi
>       char *ft_strmapi(char *s, void (*f)(unsigned int, char));

DESCRIPTION

>       Applies the function f to each character of the string passed as
>       argument to create a new string (with malloc(3)) resulting from
>       successive applications of f.

RETURN VALUE

>       The string created from the successive applications of f.
>       Returns NULL if the allocation fails.

### 7. ft_putchar_fd
>       void ft_putchar_fd(char c, int fd);

DESCRIPTION

>       Outputs the character c to given file descriptor.

RETURN VALUE

>       None

### 8. ft_putstr_fd
>       void ft_putstr_fd(char *s, int fd);

DESCRIPTION

>       Outputs the string c to given file descriptor.

RETURN VALUE

>       None

### 9. ft_putendl_fd
>       void ft_putendl_fd(char *s, int fd);

DESCRIPTION

>       Outputs the string c to given file descriptor, followed by a newline.

RETURN VALUE

>       None

### 10. ft_putnbr_fd

>       void ft_putnbr_fd(int n, int fd);

DESCRIPTION

>       Outputs the integer 'n' to the given file descriptor.

RETURN VALUE

>       None
___

## Bonus part:

### 1. ft_lstnew
>       t_list *ft_lstnew(void *content)

DESCRIPTION
>       Allocates (with malloc(3)) and returns a new element.
>       The variables content is initialized by copy of the
>       parameters of the function. The variable next is 
>       initialized to NULL.

RETURN VALUE

>       The new element.

### 2. ft_lstadd_front
>       void ft_lstadd_front(t_list **lst, t_list *new);

DESCRIPTION

>       Adds the element ’new’ at the beginning of the list.

RETURN VALUE

>       None

### 3. ft_lstsize
>       int ft_lstsize(t_list *lst);

DESCRIPTION

>       Counts the number of elements in a list.

RETURN VALUE

>       Length of the list.

### 4. ft_lstlast
>       t_list *ft_lstlast(t_list *lst);

DESCRIPTION

>       Returns the last element of the list.

RETURN VALUE

>       Last element of the list.

### 5. ft_lstadd_back
>       void ft_lstadd_back(t_list **lst, t_list *new);

DESCRIPTION

>       Adds the element ’new’ at the end of the list.

RETURN VALUE

>       None

### 6. ft_lstdelone
>       void ft_lstdelone(t_list *lst, void (*del)(void*));

DESCRIPTION

>       Takes as a parameter an element and frees the memory of
>       the element’s content using the function ’del’ given as
>       a parameter and free the element. The memory of ’next’
>       must not be freed.

RETURN VALUE

>       None

### 7. ft_lstclear
>       void ft_lstclear(t_list **lst, void (*del)(void*));

DESCRIPTION
>       Deletes and frees the given element and every successor of
>       that element, using the function ’del’ and free(3). Finally,
>       the pointer to the list must be set to NULL.

RETURN VALUE

>       None

### 8. ft_lstiter
>       void ft_lstiter(t_list *lst, void (*f)(void *));

DESCRIPTION

>       Iterates the list ’lst’ and applies the function ’f’ to the
>       content of each element.

RETURN VALUE

>       None

### 9. ft_lstmap
>       t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

DESCRIPTION

>       Iterates the list ’lst’ and applies the function ’f’ to the
>       content of each element. Creates a new list resulting of the
>       successive applications of the function ’f’. The ’del’ function
>       is used to delete the content of an element if needed.

RETURN VALUE

>       The new list. NULL if the allocation fails.
___

## 4. Personal functions:

### 1. ft_nbrlen
>       int ft_nbrlen(int n);

DESCRIPTION

>       The ft_nbrlen functions returns the length of an integer

### 2. ft_strstr
>       int ft_strcmp(const char *s1, const char *s2);

DESCRIPTION

>       The  ft_strcmp() function compares the two strings s1 and s2.  It returns an
>       integer less than, equal to, or greater than zero if s1 is found, respec‐
>       tively, to be less than, to match, or be greater than s2.


RETURN VALUE

>       If little is an empty string, big is returned; if little occurs nowhere
>       in big, NULL is returned; otherwise a pointer to the first character of
>       the first occurrence of little is returned.

### 3. ft_strcpy
>       char *strcpy(char *dest, const char *src);

DESCRIPTION

>       The strcpy() function copies the string pointed to by src, including the
>       terminating null byte ('\0'), to the buffer pointed to by dest.  The strings
>       may  not  overlap, and the destination string dest must be large enough to
>       receive the copy.  Beware of buffer overruns!

RETURN VALUE

>       The  strcpy() function returns a pointer to the destination string dest.


### 4. ft_strncpy
>       char *strncpy(char *dest, const char *src, size_t n);

DESCRIPTION

>       The strncpy() function is similar, except that at most n bytes of  src  are
>       copied. Warning:  If there is no null byte among the first n bytes of src, the
>       string placed in dest will not be null-terminated. If the length of src is less
>       than n, strncpy() writes additional null bytes to  dest to ensure that a total
>       of n bytes are written.

RETURN VALUE

>       The  strncpy() function returns a pointer to the destination string dest.

### 5. ft_strcat
>       char *strcat(char *dest, const char *src);

DESCRIPTION
>       The  strcat()  function  appends  the src string to the dest string, overwriting the
>       terminating null byte ('\0') at the end of dest, and then adds  a  terminating  null
>       byte.   The  strings may not overlap, and the dest string must have enough space for
>       the result.  If dest is not large enough, program behavior is unpredictable;  buffer
>       overruns are a favorite avenue for attacking secure programs.

RETURN VALUE

>        The strcat() function returns a pointer to the resulting string dest.

### 6. ft_strncat
>        char *strncat(char *dest, const char *src, size_t n);

DESCRIPTION

>       The strncat() function is similar to strcat(), except that it will use at most n bytes
>       from src; and src does not need to be null-terminated if it contains n or more bytes. 
>       As with strcat(), the resulting string in dest is always null-terminated. If src contains
>       n or more bytes, strncat() writes n+1 bytes to dest (n from src plus the terminating
>       null byte). Therefore, the size of dest must  be  at  least strlen(dest)+n+1.

RETURN VALUE

>       The strncat() function returns a pointer to the resulting string dest.
 
### 7. ft_strcmp
>       int ft_strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION

>       The ft_strncmp() function is similar, except it compares only the first
>       (at most) n bytes of s1 and s2.

RETURN VALUE

>       The ft_strncmp() function returns an integer less  than,  equal
>       to,  or  greater than zero if the first n bytes of s1 is found,
>       respectively, to be less than, to match, or be greater than s2.
### 8. ft_memalloc
>       void * ft_memalloc(size_t size);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a “fresh” memory area. The
>       memory allocated is initialized to 0. If the allocation fails, the
>       function returns NULL.

RETURN VALUE

>       The allocated memory area.

### 9. ft_memdel
>       void ft_memdel(void **ap);

DESCRIPTION

>       Takes as a parameter the address of a memory area that needs to be
>       freed with free(3), then puts the pointer to NULL.

RETURN VALUE

>       None

### 10. ft_strnew
>       char * ft_strnew(size_t size);

DESCRIPTION

>       Allocates (with malloc(3)) and returns a “fresh” string ending with
>       ’\0’. Each character of the string is initialized at ’\0’. If the
>       allocation fails the function returns NULL.

RETURN VALUE

>       The string allocated and initialized to 0.

### 11. ft_strdel
>       void ft_strdel(char **as);

DESCRIPTION

>       Takes as a parameter the address of a string that need to be freed
>       with free(3), then sets its pointer to NULL.

RETURN VALUE

>       None

### 12. ft_strclr
>       void ft_strclr(char *s);

DESCRIPTION

>       Sets every character of the string to the value ’\0’.

RETURN VALUE

>       None

### 13. ft_striter
>       void ft_striter(char *s, void (*f)(char *));

DESCRIPTION

>       Applies the function f to each character of the string passed as argument.
>       Each character is passed by address to f to be modified if necessary.

RETURN VALUE

>       None

### 14. ft_striteri
>       void ft_striteri(char *s, void (*f)(unsigned int, char *));

DESCRIPTION

>       Applies the function f to each character of the string passed as argument,
>       and passing its index as first argument. Each character is passed by 
>       address to f to be modified if necessary.

RETURN VALUE

>       None

### 15. ft_strmap
>       char * ft_strmap(char const *s, char (*f)(char));

DESCRIPTION

>       Applies the function f to each character of the string given as argument to
>       create a “fresh” new string (with malloc(3)) resulting from the successive
>       applications of f.

RETURN VALUE

>       The “fresh” string created from the successive applications off.

### 16. ft_strequ
>       int ft_strequ(char const *s1, char const *s2);

DESCRIPTION

>       Lexicographical comparison between s1 and s2. If the 2 strings are identical
>       the function returns 1, or 0 otherwise.

RETURN VALUE

>       1 or 0 according to if the 2 strings are identical or not.

### 17. ft_strnequ
>       int ft_strnequ(char const *s1, char const *s2, size_t n);

DESCRIPTION

>       Lexicographical comparison between s1 and s2 up to n characters or until a 
>       ’\0’ is reached. If the 2 strings are identical, the function returns 1, or
>       0 otherwise.

RETURN VALUE

>       1 or 0 according to if the 2 strings are identical or not.

### 18. ft_putchar
>       void ft_putchar(char c);

DESCRIPTION

>       Outputs the character c to the standard output.

RETURN VALUE

>       None

### 19. ft_putstr
>       void ft_putstr(char const *s);

DESCRIPTION

>       Outputs the string s to the standard output.

RETURN VALUE

>       None

### 20. ft_putnbr
>       void ft_putnbr(int n);

DESCRIPTION

>       Outputs the integer n to the standard output.

RETURN VALUE

>       None

### 12. ft_putendl
>       void ft_putendl(char *s);

DESCRIPTION

>       Outputs the string s to the standard output, followed by a newline.

RETURN VALUE

>       None

### 13. ft_lstprint_str
>       void ft_lstprint_str(t_list *lst)

DESCRIPTION

>       Prints contents (type of char) of linked list starting from head.


***

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

There is no tests for *ft_calloc*, *ft_***_fd*
