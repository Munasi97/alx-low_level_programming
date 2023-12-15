#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int cha = 'a';
while (cha <= 'z')
{
putchar(cha);
cha++;
}
putchar('\n');
return (0);
}
