<h1> The printf funciton </h1>

In this project, we replicate the printf function in the stdio.h libraray of C program.
_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

```c
int _printf(const char *format, ...)
```

Where **format** contains the string that is printed.

_printf() is a variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:
```c
%[flags][length]specifier
```

If the program runs successfully, the **return value** is the amount of chars printed.




## File Functions
------------------
* [_printf.c](_printf.c): funciton that performs standard conversion of formated string outputs

* [main.h](main.h): the header files that contain all the other dependent functions

* [print_func.c](print_func.c): funtion that decide the correct function for specific string type

* [get_func.c](get_func.c): funtion that returns the amount of identitiers

* [print_binary.c](print_binary.c): funtion for binary

* [print_integer.c](print_integer.c): funtion for integer

* [print_hex.c](print_hex.c): funtion for hexadecimal

* [print_oct.c](print_oct.c): funtion for octal

* [print_string.c](print_string.c): funtion for strings

* [print_buffer.c](handle_buffer.c): funtion for buffer

* [handle_buffer.c](handle_buffer.c): funciton that concatenates buffer chars

* [print_upx.c](print_upper_hex.c): function that prints decimal in uppercase hexadecimal

* [print_non_chars.c](print_non_chars.c): funciton that handles non printed values

* [print_unsigned_integer.c](print_unsigned_integer.c): function that print unsigned integer

* [print_rev.c](.): function that print strings in reverse form

* [print_rot.c](print_rot.c): function that print rot13 strings (with %R)

* [print_address.c](print_address.c): funciton that print pointers (with %p)

* [print_long_oct.c](print_long_oct.c), [print_short_oct.c](print_short_oct.c): functions that
print long and short decimal in octal (%lo)

* [print_long_hex.c](print_long_hex.c), [print_short_hex.c](print_short_hex.c): functions that
print long and short decimal in hexadecimal (%lx)

* [print_long_integer.c](print_long_interger.c), [print_short_int.c](print_short_int.c): functions that
print long and short integer string (%li, %hi)

 * [print_long_upx.c](print_long_upx.c), [print_short_upx.c](print_short_upx.c): functions that
print long and short integer string (%lX)

*  [print_long_unsigned_int.c](print_long_unsigned_int.c), [print_short_unt.c](print_short_unt.c): functions that
print long and short unsigned integer string (%lu, %hu)

* [print_num_hex.c](print_num_hex.c): print number in a hexadecimal (%#x)

* [print_num_upx.c](print_num_upx.c): print number in a upper hexadecimal (%#X)

* [print_num_oct.c](print_num_oct.c): print number in a octal (%#xo)

* [print_plus_int.c]: print integer with plus symbol (%+i)

* [print_space_int.c]: print integer begining with 0 and u (%i)

<h2> Author: </h2>
** Daniel Boateng **

### End

@ALX-SE
