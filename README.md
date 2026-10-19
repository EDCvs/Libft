_This project has been created as part of the 42 curriculum by ichimvis._

# Libft - Your Very First Own Library

## Description
**Libft** is the very first project at 42. 
The goal is to design and code a C library (`libft.a`) containing a collection 
of general-purpose functions that will serve as a foundational toolkit for 
future C school assignments and personal projects. 

This project is divided into three main parts:
1. **Part 1 (Libc Functions):** Reimplementing standard C library functions with 
the `ft_` prefix (e.g., `ft_strlen`, `ft_memcpy`, `ft_atoi`).
2. **Part 2 (Additional Functions):** Developing non-standard utility functions 
for string manipulation, memory handling, and file descriptor output 
(e.g., `ft_substr`, `ft_split`, `ft_itoa`).
3. **Part 3 (Linked Lists):** Implementing a complete set of utility functions 
to create and manipulate singly linked lists (`t_list`).

---

## 🛠️ Library Overview

### Part 1: Libc Re-implementations
- **Character Classification:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String Length & Manipulation:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- **Memory Operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Conversions & Allocations:** `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_calloc`, `ft_strdup`

### Part 2: Additional Utility Functions
- **String Utilities:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
- **Iterators:** `ft_strmapi`, `ft_striteri`
- **File Descriptors Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3: Linked List Functions (Bonus)
- **Node Management:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`
- **Inspection & Iteration:** `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`

---

## Instructions

### Compilation
The project includes a `Makefile` that compiles the source files with the required flags 
(`-Wall`, `-Wextra`, and `-Werror`) using `cc` and the `ar` command to generate `libft.a`.

Available rules in the `Makefile`:
- `make` or `make all`: Compiles the source files and creates `libft.a`.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes the object files and the `libft.a` static library.
- `make re`: Performs an `fclean` followed by a fresh `all` build (rebuild).

### Usage
To use the library in your own C programs, include the header file and link the static library during compilation:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, Libft!\n", 1);
    return (0);
}
```

Compile your program with:
```bash
cc -Wall -Wextra -Werror main.c libft.a
```

---

## Resources & AI Usage

### Resources
- [The C Programming Language](https://www.cimat.mx/ciencia_para_jovenes/bachillerato/libros/%5BKernighan-Ritchie%5DThe_C_Programming_Language.pdf)
- [Man pages (Linux/MacOS)](https://man7.org/linux/man-pages/)
- 42 School Peer-Learning Guidelines and Norms

### AI Usage
In accordance with the 42 AI policy and learning rules, AI was used strictly as an educational assistant to understand theoretical concepts, debug compilation errors, and review algorithmic logic. No direct code was blindly copied.
