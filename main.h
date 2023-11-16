#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>


/**
 *struct deform - struct that
 *@bet: the function id
 *@f: function to be refered to
 */
typedef struct deform
{
	char *bet;
	int (*f)();
} rythm;

int printf_int(va_list args);
int print_dec(va_list args);
int print_binary(va_list val);
int _strlen(char *str);
int print_37(void);
int _strlenc(const char *str);
int print_f_string(va_list val);
int print_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_unsigned_int(va_list args);
int print_octal(va_list val);
int print_hexa(va_list val);
int print_hexacap(va_list val);
int print_hexacap_xtra(unsigned int num);
int print_s(va_list val);
int print_pointa(va_list val);
int print_hex_xtra(unsigned long int num);
int print_r(va_list val);
int print_rot13(va_list val);
#endif
