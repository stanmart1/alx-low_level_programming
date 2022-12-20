#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int string_to_int(const char* str) {
    int result = 0;
    int sign = 1; // default to positive

    // skip leading whitespace
    while (*str == ' ' || *str == '\t' || *str == '\n') {
        str++;
    }

    // check for sign
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // convert digits to integer
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}

