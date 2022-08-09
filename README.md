IAN KITEMBE && PATRICIA RUKUD'DE

WORKING ON OUR OWN VERSION OF PRINTF


0x11. C - printf
C
Group project
 By: Julien Barbier, co-founder & CEO
 Weight: 5
 Project to be done in teams of 2 people (your team: Patricia Rukud'de, Ian Kitembe)
 Project will start Aug 5, 2022 6:00 AM, must end by Aug 10, 2022 6:00 AM
 was released at Aug 6, 2022 12:00 PM
 An auto review will be launched at the deadline


Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
