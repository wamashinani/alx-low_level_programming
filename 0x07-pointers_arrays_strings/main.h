#ifndef MAIN_H
#define MAIN_H

/*
 * void prototype()
 * int prototype()
 */

int _putchar(char);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int_strspn(char *s, char *accept);
char *_strbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char *a,[8]);
void print_diagsums(int *a,int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
