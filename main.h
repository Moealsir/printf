#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _puts(const char *s);
int _printf(const char *format, ...);
int I_handle_chars_specifiers(va_list args, const char *format);
int I_handle_numbers_specifiers(va_list args, const char *format);
int I_handle_pointer(va_list args, const char *format);

int I_handle_d_specifier(int n);
int I_handle_b_specifier(int n);
int I_handle_i_specifier(int n);
int I_handle_R_specifier(char *str);
int I_handle_r_specifier(char *str);

int handler_u_specifier(unsigned int n);
int handler_o_specifier(unsigned int n);
int handler_x_specifier(unsigned int n);
int handler_X_specifier(unsigned int n);
int handler_p_specifier(void *p);



int I_handle_S_specifier(char *str);
int I_handle_s_specifier(char *str);
int print_integer(int n);


#endif /* MAIN_H */
