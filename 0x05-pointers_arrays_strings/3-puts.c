#include "main.h"

/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */
void print_string(const char* str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
