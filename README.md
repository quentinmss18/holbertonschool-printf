# HOLBERTON SCHOOL — _printf

Recréation partielle de la fonction standard `printf` en C, avec gestion de plusieurs formats.

---

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
./printf
```

```c
_printf("Character: %c\n", 'H');
_printf("String: %s\n", "Hello World");
_printf("Number: %d\n", -1234);
_printf("Literal percent: %%\n");
_printf("Unsigned: %u\n", 3000000000);
```
```text
Character: H
String: Hello World
Number: -1234
Literal percent: %
Unsigned: 3000000000
```

```text
%c    display a single character  
%s    display a string  
%d    display a signed integer  
%i    same as %d  
%u    display an unsigned integer  
%%    display a literal percent sign  
```

📁 Project files management
_printf.c

* main function _printf
* runs through the format string
* selects the right handler via get_flag (struct array associating format characters to functions)

📁 numbers_digits.c
* print_nbr: print signed integers using recursion
* print_unsigned_nbr: print unsigned integers using recursion

📁 strings_chars.c
* _putchar: print a single character
* _puts: print a full string

📁 strings_chars_handlers.c
* _print_single_char: handler for %c
* _print_s_string: handler for %s

📁 _print_percent
* handler for %% (argument ignored)

📁 main.h
* All prototypes
* #include directives
* Struct definition for format handlers
