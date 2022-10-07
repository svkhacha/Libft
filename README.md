# About Libft

![Screenshot from 2022-10-08 02-39-20](https://user-images.githubusercontent.com/115194519/194672705-07479e92-bb9e-4d5b-a155-100d099ae8c8.png)

## Technical considerations
• Declaring global variables is forbidden

• If you need helper functions to split a more complex function, define them as static
functions. This way, their scope will be limited to the appropriate file.

• Place all your files at the root of your repository.

• Turning in unused files is forbidden.

• Every .c files must compile with the flags -Wall -Wextra -Werror.

• You must use the command ar to create your library. Using the libtool command
is forbidden.

• Your libft.a has to be created at the root of your repository.

## C functions and their description that we must implement
### Functions from _<ctype.h>_

ft_isalpha - checks for an alphabetic character.

ft_isdigit - checks for a digit (0 through 9).

ft_isalnum - checks for an alphanumeric character.

ft_isascii - checks whether c fits into the ASCII character set.

ft_isprint - checks for any printable character.

ft_toupper - convert char to uppercase.

ft_tolower - convert char to lowercase.

### Functions from _<string.h>_

ft_memset - fill memory with a constant byte.

ft_strlen - calculate the length of a string.

ft_bzero - zero a byte string.

ft_memcpy - copy memory area.

ft_memmove - copy memory area.

ft_strlcpy - copy string to an specific size.

ft_strlcat - concatenate string to an specific size.

ft_strchr - locate character in string.

ft_strrchr - locate character in string.

ft_strncmp - compare two strings.

ft_memchr - scan memory for a character.

ft_memcmp - compare memory areas.

ft_strnstr - locate a substring in a string.

ft_strdup - creates a dupplicate for the string passed as parameter.

### Functions from _<stdlib.h>_

ft_atoi - convert a string to an integer.

ft_calloc - allocates memory and sets its bytes' values to 0.

### Non-standard functions

ft_substr - returns a substring from a string.

ft_strjoin - concatenates two strings.

ft_strtrim - trims the beginning and end of string with specific set of chars.

ft_split - splits a string using a char as parameter.

ft_itoa - converts a number into a string.

ft_strmapi - applies a function to each character of a string.

ft_striteri - applies a function to each character of a string.

ft_putchar_fd - output a char to a file descriptor.

ft_putstr_fd - output a string to a file descriptor.

ft_putendl_fd - output a string to a file descriptor, followed by a new line.

ft_putnbr_fd - output a number to a file descriptor.
