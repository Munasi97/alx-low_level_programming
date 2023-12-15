#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabet in lower case and then in upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int cha = 'a';
int CHA = 'A';
while (cha <= 'z')
{
putchar(cha);
cha++;
}
while (CHA <= 'Z')
{
putchar(CHA);
CHA++;
}
putchar('\n');
return (0);
}
