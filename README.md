# Libft 📚

[![42 School](https://img.shields.io/badge/42-School-blue)](https://42firenze.it/)
[![GitHub license](https://img.shields.io/github/license/Nazar963/42_libft)](https://github.com/Nazar963/42_libft/blob/main/LICENSE)
[![Build Status](https://img.shields.io/github/actions/workflow/status/<your_username>/libft/build.yml?branch=master)](https://github.com/<your_username>/libft/actions)

Your very first C library, containing reimplementations of standard functions and additional utilities.

## Table of Contents 📖
- [Description](#description-)
- [Features](#features-)
- [Installation](#installation-)
- [Usage](#usage-)
- [Makefile Targets](#makefile-targets-)
- [Testing](#testing-)
- [Acknowledgments](#acknowledgments-)
- [License](#license-)

## Description 📝
Libft is a 42 School project that serves as the foundation for future C programming projects. This library contains:
- Reimplementations of standard C library functions
- Additional utility functions
- Bonus functions for linked list manipulation

Designed to be efficient, well-structured, and educational, this project serves as a fundamental building block for understanding low-level programming concepts.

## Features ✨

### Standard Functions 🔧
- **Character Handling**: `ft_isalpha`, `ft_isdigit`, `ft_toupper`, etc.
- **String Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strnstr`, etc.
- **Memory Management**: `ft_memset`, `ft_memmove`, `ft_bzero`, etc.
- **Conversion Functions**: `ft_atoi`, `ft_itoa`

### Additional Functions 🛠️
- **String Operations**: `ft_substr`, `ft_strjoin`, `ft_split`
- **Memory Operations**: `ft_calloc`, `ft_strdup`
- **File Descriptor Operations**: `ft_putchar_fd`, `ft_putnbr_fd`
- **Linked List Utilities (Bonus)**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`

## Installation ⚙️

### Requirements
- GCC (GNU Compiler Collection)
- GNU Make

### Compilation
1. Clone the repository:
   ```bash
   git clone https://github.com/<your_username>/libft.git
   cd libft
   ```
2. Compile the library:
   ```bash
   make
   ```
3. The static library `libft.a` will be created in the root directory.

## Usage 💻

Include the library header in your C files:
```c
#include "libft.h"
```

Compile your project with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft -I includes -o your_program
```

### Example
```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello 42!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

## Makefile Targets 🛠️
- `make` or `make all`: Compile the library
- `make clean`: Remove object files
- `make fclean`: Remove object files and library
- `make re`: Recompile the library

## Testing �
The library can be tested using:
- Custom test main programs
- 42 School testers (e.g., [Tripouille/libftTester](https://github.com/Tripouille/libftTester))
- Manual testing with various edge cases

```bash
# Example test compilation
gcc -Wall -Wextra -Werror tests.c -L. -lft -I includes -o test
./test
```

## Acknowledgments 🙏
- 42 School for the project concept
- C standard library documentation
- Peer reviewers and contributors

## License 📄
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

⭐ Star this repository if you found it useful!
[![GitHub stars](https://img.shields.io/github/stars/<your_username>/libft?style=social)](https://github.com/<your_username>/libft/stargazers)

[![42 Profile](https://img.shields.io/badge/Profile-<your_42_login>-blue)](https://profile.intra.42.fr/users/<your_42_login>)
[![GitHub Profile](https://img.shields.io/badge/GitHub-<your_username>-lightgrey)](https://github.com/<your_username>)
```

**To use this template:**
1. Replace all `<your_username>` occurrences with your GitHub username
2. Replace `<your_42_login>` with your 42 School intra login
3. Update features list with your actual implementations
4. Add any project-specific details or additional sections
5. Save as `README.md` in your project root

This README includes:
- Modern badges for visual appeal
- Clear documentation structure
- Code examples for easy adoption
- Build status indicator
- Social integration (GitHub stars, 42 intra profile)
- Comprehensive feature listing
- Testing and development guidelines

Let me know if you'd like to customize any section or add specific details!
