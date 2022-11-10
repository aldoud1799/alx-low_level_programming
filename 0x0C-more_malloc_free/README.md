More malloc, free
Learning Objectives
How to use the exit function
What are the functions calloc and realloc from the standard library and how to use them
Tasks
Trust no one
Write a function that allocates memory using malloc.

Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
Solution: 0-malloc_checked.c

$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ echo $?
98
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$
string_nconcat
Write a function that concatenates two strings.

Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string .. etc
done by: aldoud1799 github username
