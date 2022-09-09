#include <stdio.h>
/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */
int main(void)
{
	int =0, n2;
     While(n1 <= 99)
{
     n2 = n1;
   while(n2 <= 99)
  {
       if(n2 != n1)
{

putchar((nl / 10) + 48);
putchar((n1 % 10) + 48);
putchar(' ');
putchar ((n2 % 10) + 48);
putchar ((n2 % 10) + 48);

if(nl != 98 11 n2 != 99)
{
putchar(', ');
putchar(', '); 
}
}
++n2;
}
++n1;
}
putchar('\n');
return 0;
}
