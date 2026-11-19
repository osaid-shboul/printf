_This project has been created as part of the 42 curriculum by oalshbou._

# ft_printf

## Description

**ft_printf** is my re-implementation of the C `printf` function. The project is about **variadic functions** (`stdarg.h`: `va_start`, `va_arg`, `va_end`) and about printing every data type by writing characters with `write()` only.

`ft_printf` returns the number of characters printed, like the original.

## Supported conversions

| Conversion | Output |
| --- | --- |
| `%c` | A single character |
| `%s` | A string (`(null)` for a `NULL` pointer) |
| `%p` | A pointer address in hexadecimal |
| `%d` / `%i` | A signed decimal integer |
| `%u` | An unsigned decimal integer |
| `%x` / `%X` | Hexadecimal, lowercase / uppercase |
| `%%` | A percent sign |

## Structure

Each conversion has its own file (`print_char.c`, `print_str.c`, `print_nbr.c`, `print_unbr.c`, `print_hex.c`, `print_ptr.c`). `ft_printf.c` reads the format string and dispatches to the right printer.

## Instructions

```bash
make        # builds libftprintf.a
make fclean # cleans everything
```

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, you are %d. Hex: %x\n", "42", 25, 255);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
```

## Resources

- `man 3 printf`, `man 3 stdarg`
- AI usage: [describe how you used AI here]
