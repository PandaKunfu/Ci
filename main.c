#include <stdio.h>
#include <string.h>
int main()
{
char input[1001];
scanf("%s",input);
int i,j,a;
i=0;
j=0;
a=0;
while((i<strlen(input))&&(a==0))
{
	j=i+1;
	while((j<strlen(input))&&(a==0))
	{
		if(input[i]==input[j])
		{
			a=1;
			printf("%c",input[i]);
		}
		else
		j++;		
	}
	i++;

}

return 0;
}