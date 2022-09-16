#include "main.h"
/**
 *_isupper-tells if a character is a digit or not
 *@c: character to be tested
 *Return:1(digit) or 0(not digit)
 */
int __isdigit(int c)
{
        char digit;

        if (c >= 48 && c <= 57)
        {
                digit = 1;
        }
        else
        {
                digit = 0;
        }
        return (digit);
}
