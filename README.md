<h1> The printf funciton </h1>

In this project, we replicate the printf function in the stdio.h libraray of C program. 
_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	  `int _printf(const char *format, ...)` 

Where **format** contains the string that is printed. 

_printf() is a variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
	
If the program runs successfully, the **return value** is the amount of chars printed.
	



## File Functions
------------------
* [_printf.c](_printf.c): funciton that performs standard conversion of formated string outputs

* [main.h](main.h): the header files that contain all the other dependent functions
### print_func.c
Pointer To A Function That Selects The Correct Function To Perform The Operation.



### print_buffer.c
Function That Prints The Buffer.



### handle_buffer.c
Function That Concatenates The Buffer Characters.



### print_character.c
Function That Writes The Character C To Stdout.

/* Indetifier : %c */


### print_string.c
Function That Writes The String To Stdout.

/* Indetifier : %s */


* [print_integer.c](print_interger.c): function that print integers (%i or %d)

### print_binaray.c
Function That Prints Decimal In Binary.

/* Indetifier : %b */


### print_oct.c
Function That Prints Decimal In Octal.

/* Indetifier : %o */



### print_hex.c
Function That Prints Decimal In Hexadecimal.

/* Indetifier : %x */



### print_upx.c
Function That Prints Decimal In Uppercase Hexadecimal.

/* Indetifier : %X */



### print_usr.c
Function That Prints A String And Values Of Non-Printed Chars.

/* Indetifier : %S */


### print_unt.c
Function That Prints An Unsigned Integer.

/* Indetifier : %u */



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