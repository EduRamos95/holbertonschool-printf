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

/* Functions_extra1 */
static int hex_print(char c);
int print_S(va_list S);
int print_r(va_list r);

/* Functions_extra2 */
int print_hex(unsigned int n, unsigned int c);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);

/* Functions_extra3 */
int print_R(va_list R);

/* Functions_extra4 */
int print_u(va_list u);
int print_o(va_list o);
int print_b(va_list b);

#endif
