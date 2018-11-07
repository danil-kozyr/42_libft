# 42_libft

A comprehensive C library implementation created as part of the 42 School curriculum. This project recreates essential C standard library functions and adds some additional utility functions.

## 📖 About

**libft** is the project in the 42 School curriculum. The goal is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects. It's a great way to learn the fundamentals of C programming and understand how standard library functions work under the hood.

## 🚀 Features

This library implements **69 functions** organized into several categories:

### Memory Functions

- `ft_memset` - Fill memory with a constant byte
- `ft_memcpy` - Copy memory area
- `ft_memccpy` - Copy memory area until character found
- `ft_memmove` - Move memory area (handles overlapping)
- `ft_memchr` - Scan memory for a character
- `ft_memcmp` - Compare memory areas
- `ft_memalloc` - Allocate and initialize memory to zero
- `ft_memdel` - Free memory and set pointer to NULL
- `ft_bzero` - Zero out memory

### String Functions

- `ft_strlen` - Calculate string length
- `ft_strcpy` - Copy string
- `ft_strncpy` - Copy string with size limit
- `ft_strcat` - Concatenate strings
- `ft_strncat` - Concatenate strings with size limit
- `ft_strlcat` - Size-bounded string concatenation
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate last occurrence of character
- `ft_strstr` - Locate substring
- `ft_strnstr` - Locate substring with size limit
- `ft_strcmp` - Compare strings
- `ft_strncmp` - Compare strings with size limit
- `ft_strdup` - Duplicate string
- `ft_strnew` - Create new string
- `ft_strdel` - Delete string
- `ft_strclr` - Clear string
- `ft_striter` - Apply function to each character
- `ft_striteri` - Apply function to each character with index
- `ft_strmap` - Apply function to each character (returns new string)
- `ft_strmapi` - Apply function to each character with index (returns new string)
- `ft_strequ` - Test if strings are equal
- `ft_strnequ` - Test if strings are equal with size limit
- `ft_strsub` - Extract substring
- `ft_strjoin` - Join two strings
- `ft_strtrim` - Trim whitespace from string
- `ft_strsplit` - Split string into array of strings

### Character Functions

- `ft_isalpha` - Test for alphabetic character
- `ft_isdigit` - Test for digit character
- `ft_isalnum` - Test for alphanumeric character
- `ft_isascii` - Test for ASCII character
- `ft_isprint` - Test for printable character
- `ft_isspace` - Test for whitespace character (bonus)
- `ft_toupper` - Convert to uppercase
- `ft_tolower` - Convert to lowercase

### Conversion Functions

- `ft_atoi` - Convert string to integer
- `ft_itoa` - Convert integer to string

### Output Functions

- `ft_putchar` - Output character to stdout
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr` - Output string to stdout
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl` - Output string with newline to stdout
- `ft_putendl_fd` - Output string with newline to file descriptor
- `ft_putnbr` - Output integer to stdout
- `ft_putnbr_fd` - Output integer to file descriptor

### Linked List Functions

- `ft_lstnew` - Create new list element
- `ft_lstadd` - Add element to beginning of list
- `ft_lstdel` - Delete entire list
- `ft_lstdelone` - Delete single list element
- `ft_lstiter` - Apply function to each list element
- `ft_lstmap` - Apply function to each element (returns new list)

### Additional Utility Functions

- `ft_sqrt` - Calculate square root
- `ft_swap` - Swap two integers

## 🔧 Build Instructions

### Prerequisites

- GCC compiler
- Make

### Compilation

```bash
# Build the library
make

# Clean object files
make clean

# Clean everything (objects and library)
make fclean

# Rebuild everything
make re
```

This will create `libft.a` - a static library that you can link with your projects.

## 📝 Usage

### Basic Usage

```c
#include "libft.h"

int main() {
    // String operations
    char *str = ft_strdup("Hello, World!");
    char *upper = ft_strmap(str, ft_toupper);

    // Memory operations
    char *buffer = ft_memalloc(100);
    ft_memset(buffer, 'A', 50);

    // Output
    ft_putstr(upper);
    ft_putchar('\n');

    // Cleanup
    ft_strdel(&str);
    ft_strdel(&upper);
    ft_memdel((void**)&buffer);

    return 0;
}
```

### Compilation with libft

```bash
# Compile your program with libft
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```

### Linked List Example

```c
#include "libft.h"

int main() {
    // Create linked list
    t_list *list = ft_lstnew("First", 6);
    t_list *second = ft_lstnew("Second", 7);
    t_list *third = ft_lstnew("Third", 6);

    // Add elements
    ft_lstadd(&list, second);
    ft_lstadd(&list, third);

    // Print list (you'd need to implement this)
    // print_list(list);

    // Clean up
    ft_lstdel(&list, &free);

    return 0;
}
```

## 📁 Project Structure

```
42_libft/
├── src/                    # Source files
│   ├── ft_*.c             # Function implementations
├── inc/                   # Header files
│   └── libft.h            # Main header file
├── obj/                   # Object files (created during build)
├── Makefile              # Build configuration
├── author                # Author information
└── README.md             # Project documentation
```

## 🔍 Implementation Details

### Memory Safety

All functions handle edge cases and null pointers appropriately. Memory allocation functions check for allocation failures and return NULL when appropriate.

### 42 School Standards

The code follows the 42 School norminette standards:

- Maximum 25 lines per function
- Maximum 80 characters per line
- Specific formatting and naming conventions
- No for loops (while loops only)
- Limited number of variables per function

### Performance

Functions are implemented with efficiency in mind, using appropriate algorithms and avoiding unnecessary operations.

## 📊 Function Categories Summary

| Category    | Functions | Description                           |
| ----------- | --------- | ------------------------------------- |
| Memory      | 9         | Low-level memory operations           |
| String      | 25        | String manipulation and analysis      |
| Character   | 7         | Character testing and conversion      |
| Conversion  | 2         | Type conversion utilities             |
| Output      | 8         | Output to stdout and file descriptors |
| Linked List | 6         | Dynamic data structure operations     |
| Utility     | 2         | Additional helper functions           |

## 🎓 About 42 School

42 is a global education initiative that proposes a new way of learning technology: no courses, no teachers, no tuition fees. The peer-to-peer learning allows students to unleash their creativity through project-based learning.

---

_This library represents the foundational knowledge required for all subsequent 42 School projects. Each function has been carefully implemented to match the behavior of the standard C library while adhering to 42's strict coding standards._
