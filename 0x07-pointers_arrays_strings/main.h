#ifndef MAIN_HEADER
#define MAIN_HEADER
/* Define libraries */
#include <unistd.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

/* function that fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);
/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* function that locates a character in a string */
char *_strchr(char *s, char c);
/* function that gets length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
/*  function that searches a string for any of a set of bytes */
char *_strpbrk(char *s, char *accept);
/* locates a substring */
char *_strstr(char *haystack, char *needle);
/* counts the length of string */
int _strlen(char *s);
/* prints the chessboard */
void print_chessboard(char (*a)[8]);
/* prints */
int _putchar(char c);
/* adds the diagnonals */
void print_diagsums(int *a, int size);
/* sets value of a pointer to a char */
void set_string(char **s, char *to);

#endif /* MAIN_HEADER */