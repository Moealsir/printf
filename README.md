# Custom Printf Function

This project is a custom implementation of the '**printf**' function in the C programming language. It provides a subset of the standard '**printf**' format specifiers, including '**%d**', '**%i**', '**%b**', '**%R**', '**%r**', '**%u**', '**%o**', '**%x**', '**%X**', '**%p**', '**%S**', '**%s**', and '**%%**'.
<br>
## Project Structure

The project is organized into several source files to maintain a clean and modular codebase:
<br><br>
'**main.h**'

This header file contains the function prototypes for all the functions used in the project. It also includes necessary standard library and system header files.
<br><br>
'**_printf.c**'

The '**_printf**' function is the custom '**printf**' implementation that processes the format string and dispatches specifiers to corresponding handler functions. It uses a variable number of arguments using the va_list mechanism.

'**why_did_i_even_start_this_project.c.c**'

This file contains the implementation of functions responsible for handling the '**%d**', '**%i**', '**%b**', '**%R**', and '**%r**' specifiers.
```
I_handle_b_specifier: Handles the %b specifier to display the binary representation of an integer.
I_handle_d_specifier: Handles the %d specifier to print integers.
I_handle_i_specifier: Handles the %i specifier for printing integers.
I_handle_R_specifier: Handles the %R specifier for ROT13 encoding of strings.
I_handle_r_specifier: Handles the %r specifier for printing strings in reverse.
```

'**i'm_not_sure_what_this_file_does_but_don't_delete_it.c**'

This file contains functions to handle the '**%u**', '**%o**', '**%x**', '**%X**', and '**%p**' specifiers:

    handler_u_specifier: Handles the %u specifier for printing unsigned integers.
    handler_o_specifier: Handles the %o specifier for printing octal numbers.
    handler_x_specifier: Handles the %x specifier for printing hexadecimal numbers in lowercase.
    handler_X_specifier: Handles the %X specifier for printing hexadecimal numbers in uppercase.
    handler_p_specifier: Handles the %p specifier for printing pointer addresses.

'**send_help.c**'

This file contains functions to handle the '**%S**' and '**%s**' specifiers:

    I_handle_S_specifier: Handles the %S specifier for custom string formatting, including displaying non-printable characters in hexadecimal format.
    I_handle_s_specifier: Handles the %s specifier for printing strings. It also accounts for NULL  strings.
<br>

>made with love by [@Moealsir](https://github.com/Moealsir) && [Kirito99x](https://github.com/Kirito99x)