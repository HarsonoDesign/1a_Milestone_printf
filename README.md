*This project has been created as part of the 42 curriculum by nkalff*

# ft_printf


## ---------------------------------- Description


ft_printf is a foundational project at Codam (42 Network) that challenges students to recreate the standard C library function printf(). The primary objective of this project is to learn how to handle a variable number of arguments in C using variadic functions (va_start, va_arg, va_copy, va_end).


Through this project, a custom library (libftprintf.a) is built that mimics the behavior of the original printf() for the following format specifiers:


 - %c - Prints a single character

 - %s - Prints a string

 - %p - Prints a void * pointer argument in hexadecimal format

 - %d - Prints a decimal (base 10) number

 - %i - Prints an integer in base 10

 - %u - Prints an unsigned decimal (base 10) number

 - %x - Prints a number in hexadecimal (base 16) lowercase format

 - %X - Prints a number in hexadecimal (base 16) uppercase format

 - %% - Prints a percent sign



## ---------------------------------- Instructions


#### Compilation

Use the Makefile to compile the library, clone this repository and run make in the root directory. This will generate the static library libftprintf.a.

 - git clone https://github.com/HarsonoDesign/1a_Milestone_printf.git

 - cd 1a_Milestone_printf

 - make


#### Usage

To use ft_printf in your own C projects, include the header file in your code:

 - #include "ft_printf.h"



When compiling your project, link the generated libftprintf.a library:

 - cc main.c libftprintf.a -o my_program

 - ./my_program


#### Makefile Rules

 - make or make all - Compiles the source files and creates libftprintf.a

 - make clean - Removes all compiled object (.o) files

 - make fclean - Removes all object files and the libftprintf.a library

 - make re - Performs a fclean followed by all




## ---------------------------------- Resources



 - During the development of this project, the following resources were consulted for learning, debugging, and conceptual understanding:

 - As an introduction to the concept of variadic functions, I watched Oceano's YouTube video:
https://www.youtube.com/watch?v=7Sph8JlRo0g

 - Codam Peers: Collaborating, discussing edge cases, consulting, and doing peer-evaluations with fellow students at Codam to gain a better understanding of the dependencies between the functions and to master the syntax of va_list.

 - GeeksforGeeks: Used as a reference for understanding variadic functions (<stdarg.h>), data type limits, and base conversions in C.

 - AI (Gemini): Utilized as a supplementary learning tool to clarify complex C concepts, brainstorm edge-case test scenarios, and assist in structuring documentation.