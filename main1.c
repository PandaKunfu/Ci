#include <stdbool.h>
#include <string.h>
#include <stdio.h>
 bool Compare (char st[],char st1[],int len,int len1);
int main(int argc, char *argv[])
{
	int len,len1;
	char st[99];
	gets(st);
	len=strlen(st);
	char st1[99];
	gets(st1);
	len1=strlen(st1);
	if(len!=len1)
	{
		printf("no");
	}
	else if( Compare(st[0],st1[0],len,len1)==0)
	
	printf("no");
	else
	printf("yes");
	return 0;
}
 bool Compare (char st[],char st1[],int len,int len1)
{
	 int i,s;       
       
        i=0;
    while ((st+i = st1+i) != '\0')
    i++;
return 0;
}
