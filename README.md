<h1> The printf funciton </h1>

In this project, we replicate the printf function in the stdio.h libraray of C program. 
_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	  ```int _printf(const char *format, ...)```

Where **format** contains the string that is printed. 

_printf() is a variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
	
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

### print_rev.c
Function That Writes The String To Stdout In Reverse.

/* Indetifier : %r */

### print_rot.c
Function That Writes The String To Stdout In Rot13.

/* Indetifier : %R */

### print_address.c
Function That Prints The Address Of An Input Variable.

/* Indetifier : %p */

### print_long_oct.c
Function That Prints Long Decimal Number In Octal.

/* Indetifier : %lo */

### print_long_hex.c
Function That Prints Long Decimal Number In Hexadecimal.

/* Indetifier : %lx */

### print_long_int.c
Function That Prints  A Long Integer.

/* Indetifier : %li */

### print_long_upx.c
Function That Prints A Long Decimal In Uppercase Hexadecimal.

/* Indetifier : %lX */

### print_long_unt.c
Function That Prints A Long Unsigned Integer.

/* Indetifier : %lu */

### print_short_oct.c
Function That Prints Short Decimal Number In Octal.

/* Indetifier : %ho */

### print_short_hex.c
Function That Prints Short Decimal Number In Hexadecimal.

/* Indetifier : %hx */

### print_short_int.c
Function That Prints  A Short Integer.

/* Indetifier : %hi */

### print_short_upx.c
Function That Prints A Short Decimal In Uppercase Hexadecimal.

/* Indetifier : %hX */



### print_short_unt.c
Function That Prints A Short Unsigned Integer.

/* Indetifier : %hu */

### print_num_hex.c
Function That Print A Number In Hexadecimal Begining With 0 And x.

/* Indetifier : %#x */
### print_num_oct.c
Function That Prints A Number In Octal Begining With 0 And o.

/* Indetifier : %#o */


### print_num_upx.c
Function That Prints A Number In Uppercase Hexadecimal.

/* Indetifier : %#X */



### print_plus_int.c
Function That Prints An Integer With Plus Symbol.

/* Indetifier : %+i */



### print_space_int.c
Function That Prints An Integer Begining With 0 And u.

/* Indetifier : % i */



### ev_print_func.c
Function That Returns The Amount Of Indetifiers.



### Authors
Daniel Boateng

------------

### End

Boateng Daniel @ALX-SE