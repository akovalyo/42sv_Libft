 42sv_Libft - akovalyo

### Summary: 

The aim of this project is to code a C library regrouping usual functions that
will be allowed to use in all other projects.

### Content:

**1. Libc functions**
 - [x] memset
 - [x] bzero
 - [x] memcpy
 - [x] memccpy
 - [x] memmove
 - [x] memchr
 - [x] memcmp
 - [x] strlen
 - [x] strdup
 - [x] strcpy
 - [x] strncpy
 - [x] strcat
 - [x] strncat
 - [x] strlcat
 - [x] strchr
 - [x] strrchr
 - [x] strstr
 - [x] strnstr
 - [x] strcmp
 - [x] strncmp
 - [x] atoi
 - [x] isalpha
 - [x] isdigit
 - [x] isalnum
 - [x] isascii
 - [x] isprint
 - [x] toupper
 - [x] tolower

**2. Additional functions**
 - [x] ft_memalloc
 - [x] ft_memdel
 - [x] ft_strnew
 - [x] ft_strdel
 - [x] ft_strclr
 - [x] ft_striter
 - [x] ft_striteri
 - [x] ft_strmap
 - [x] ft_strmapi
 - [x] ft_strequ
 - [x] ft_strnequ
 - [x] ft_strsub
 - [x] ft_strjoin
 - [ ] ft_strtrim
 - [ ] ft_strsplit
 - [ ] ft_itoa
 - [x] ft_putchar
 - [x] ft_putstr
 - [x] ft_putendl
 - [x] ft_putchar_fd
 - [x] ft_putstr_fd
 - [x] ft_putendl_fd
 - [x] ft_putnbr_fd

**3. Bonus part:**
 - [ ] ft_lstnew
 - [ ] ft_lstdelone
 - [ ] ft_lstdel
 - [ ] ft_lstadd
 - [ ] ft_lstiter
 - [ ] ft_lstmap

**4. Personal functions:**

### Tests:

Put *libft.h* and *libft.a* in the folder **test** and run 
```bash
make
```

There should be no errors (segmentation fault, etc).

No tests: ft_memdel, ft_strnew, ft_strdel, ft_memalloc (test only for allocation memory failure)
