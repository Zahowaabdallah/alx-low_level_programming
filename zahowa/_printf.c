#include "main.h"

int _printf(const char *format, ...)
{
    va_list list;
    
    va_start(list, format);
    
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'c')
            {
                
                _putchar(va_arg(list, int));
            }
            else if (*format == '%'){
               
                _putchar('%');
            }
            else if (*format == 's')
            {
               
                print_string(va_arg(list, char *));
            }
            else {
                
            }
        }
        else{
            _putchar(*format);
        }
        format++;
    }
}
