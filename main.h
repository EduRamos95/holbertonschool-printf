#ifndef MAIN_H
#define MAIN_H
/*libraries*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct spec Specifier_t;
/*struct to find a function to specifier*/
/**
  * struct spec - structure to find a specific function
  * @op: options are preceded by a '%' character.
  * @f: pointer to function
  */
struct spec
{
	char *op;
	int (*f)(va_list);
};

/* given prototypes */
int _putchar(char c);
int _printf(const char *format, ...);

/* this functions are inside functions.c */
int print_char(va_list c);
int print_string(va_list s);
int print_mod(va_list args);

/* Functions for i and d specifiers */
int print_i(va_list i);
int print_d(va_list d);

#endif
