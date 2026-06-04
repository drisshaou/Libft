*This project has been created as part of the 42 curriculum by drhaouha.*

# Libft — Your very first own library

## Description

First project of the 42 curriculum. The goal is to reimplement a set of standard C library functions from scratch, then add custom utility functions not found in the libc. The result is a static library `libft.a` that can be reused throughout the entire 42 curriculum.

The project is split into three parts: libc reimplementations, additional string/memory utilities, and linked list manipulation functions.

## Compilation

```bash
make        # builds libft.a
make bonus  # builds libft.a including linked list functions
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + make
```

To use the library in another project:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Library Reference

### Part 1 — Libc functions

Reimplementations of standard libc functions. All use the `ft_` prefix (e.g. `strlen` → `ft_strlen`). No external functions used except where noted.

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_isalpha` | `int ft_isalpha(int c)` | Returns 1 if `c` is alphabetic, 0 otherwise |
| `ft_isdigit` | `int ft_isdigit(int c)` | Returns 1 if `c` is a digit, 0 otherwise |
| `ft_isalnum` | `int ft_isalnum(int c)` | Returns 1 if `c` is alphanumeric, 0 otherwise |
| `ft_isascii` | `int ft_isascii(int c)` | Returns 1 if `c` is in ASCII range, 0 otherwise |
| `ft_isprint` | `int ft_isprint(int c)` | Returns 1 if `c` is printable, 0 otherwise |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | Returns the length of `s` |
| `ft_memset` | `void *ft_memset(void *b, int c, size_t len)` | Fills `len` bytes of `b` with `c` |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | Zeroes `n` bytes of `s` |
| `ft_memcpy` | `void *ft_memcpy(void *dst, const void *src, size_t n)` | Copies `n` bytes from `src` to `dst` |
| `ft_memmove` | `void *ft_memmove(void *dst, const void *src, size_t len)` | Safe copy handling overlapping areas |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t sz)` | Size-bounded string copy |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t sz)` | Size-bounded string concatenation |
| `ft_toupper` | `int ft_toupper(int c)` | Converts `c` to uppercase |
| `ft_tolower` | `int ft_tolower(int c)` | Converts `c` to lowercase |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | First occurrence of `c` in `s` |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | Last occurrence of `c` in `s` |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares up to `n` bytes of two strings |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | Finds `c` in the first `n` bytes of `s` |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares `n` bytes of two memory areas |
| `ft_strnstr` | `char *ft_strnstr(const char *h, const char *n, size_t len)` | Finds `n` in `h` within `len` bytes |
| `ft_atoi` | `int ft_atoi(const char *str)` | Converts a string to an integer |
| `ft_calloc` | `void *ft_calloc(size_t nmemb, size_t size)` | Allocates zero-initialised memory (`malloc`) |
| `ft_strdup` | `char *ft_strdup(const char *s)` | Returns a heap-allocated copy of `s` (`malloc`) |

### Part 2 — Additional functions

Custom functions not present in the libc, or present in a different form.

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | Returns a substring of `s` starting at `start`, max length `len` |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | Concatenates `s1` and `s2` into a new string |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | Trims characters in `set` from both ends of `s1` |
| `ft_split` | `char **ft_split(char const *s, char c)` | Splits `s` on delimiter `c`, returns NULL-terminated array |
| `ft_itoa` | `char *ft_itoa(int n)` | Converts integer `n` to a string (handles negatives) |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | Applies `f` to each character, returns new string |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` | Applies `f` to each character in place (by address) |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | Writes character `c` to file descriptor `fd` |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | Writes string `s` to file descriptor `fd` |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | Writes string `s` followed by `\n` to `fd` |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | Writes integer `n` to file descriptor `fd` |

### Part 3 — Linked list (bonus)

Functions operating on the `t_list` singly linked list structure defined in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Prototype | Description |
|----------|-----------|-------------|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | Creates a new node with `content`, `next` set to NULL |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | Prepends `new` to the list |
| `ft_lstsize` | `int ft_lstsize(t_list *lst)` | Returns the number of nodes in the list |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | Returns the last node of the list |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | Appends `new` to the list |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | Frees one node's content with `del`, then frees the node |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | Frees all nodes and sets the pointer to NULL |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | Applies `f` to each node's content |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | Creates a new list by applying `f` to each node's content |

## Rules

- Written in C, compiled with `cc -Wall -Wextra -Werror`
- No global variables
- Helper functions must be `static`
- All files at the root of the repository
- Library created with `ar` — `libtool` is forbidden
- No unused files
- No memory leaks
- Norm compliant (bonus files in `_bonus.c/.h`)
- No `-std=c99` flag — do not use the `restrict` qualifier in prototypes

## Testing

### Compile with debug flags

```bash
cc -g -w main.c -I../ -L../ -lft
```

Flag breakdown:
- `-g` — include debug symbols (useful with valgrind/gdb)
- `-w` — suppress all compiler warning messages
- `-I../` — add parent directory to include-file search path (finds `libft.h`)
- `-L../` — add parent directory to library search path (finds `libft.a`)
- `-lft` — link against `libft.a`

### Check for memory leaks

```bash
valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=valgrind-out.txt \
         ./a.out
```

## Resources

- [man pages — libc functions](https://man7.org/linux/man-pages/)
- [cplusplus.com — C standard library reference](https://cplusplus.com/reference/clibrary/)
- [glibc vs BSD libc differences](https://www.gnu.org/software/libc/manual/)
- [Understanding static libraries — ar command](https://linux.die.net/man/1/ar)
- [Linked lists in C](https://www.learn-c.org/en/Linked_lists)
- [Makefile example — 42 project](https://github.com/pulgamecanica/42Course/blob/main/42/ft_ls/Makefile)
- [Libft test suite — pulgamecanica](https://github.com/pulgamecanica/42Course/tree/main/42Core/Libft/tests)
