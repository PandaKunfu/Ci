#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
	char st;
    st = getchar ();
    if ('a' <= st && st <= 'z') 
	{
	st = toupper (st);	
	}	     
   printf ("%c\n",st);
   return 0;
}