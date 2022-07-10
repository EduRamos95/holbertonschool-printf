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

#endif
