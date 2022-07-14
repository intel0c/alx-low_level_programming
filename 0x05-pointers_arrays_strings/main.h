/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the vale it points to 98
 * @n: pointer to int n
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b);

/**
 * main - returns the length of a string
 * @s: string
 */

int _strlen(char *s);

/**
 * _puts -prints a string, followed by a new line, to stdout
 * @s: string to reverse
 */

void _puts(char *str);

/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to print
 */

void print_rev(char *s);

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s);

/**
 * puts2 - print every other character of a string, starting with the first character, followed by a new line.
 * @str: string to print
 */

void puts2(char *str);

/**
 * puts_half - print half of a string followed by a new line
 * @str: string to print
 */

void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: array
 * @n: number of elements
*/

void print_array(int *a, int n);

/**
* _strcpy - copies the string pointed to by src, including the terminating null byte (\0),
* to the buffer pointed to by dest
* @dest: copy source to this buffer
* @src: this is the source to copy
*/

char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);
