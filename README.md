# Git Repo for the '42 Helbronn' Project ft_printf
---

| **Program name**     | libftprintf.a                                                                               |
|----------------------|---------------------------------------------------------------------------------------------|
| **Turn in files**    | Makefile, *.h, */*.h, *.c, */*.c                                                            |
| **Makefile**         | NAME, all, clean, fclean, re                                                                |
| **External funcs.**  | malloc, free, write, va_start, va_arg, va_copy, va_end                                      |
| **Libft authorized** | Yes                                                                                         |
| **Description**      | Write a library that contains ft_printf(), a function that will mimic the original printf() |

---
## Objective: 

Recode the C function printf included in the libc library

The prototype of printf is:

```int ft_printf(const char *, ...);```
---

### Requirements:

* Don't impplement the buffer management of the original **printf()**
* Your function has to handle the following conversions: **cspdiuxX%**
* Your function will be compared against the original **printf()**
* You must use the command **ar** to create your library
    * using the **libtool** command is forbidden
* Your **libftprintf.a** has to be created at the root of your repository
---

#### Usage

> Compile using make 
> Copy resulting libftprintf.a file in your project directory as well as the ft_printf.h file -> profit

