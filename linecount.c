#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int i,l,c=1;
	scanf("%[^\t]s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		 if(a[i]=='\n')
			c=c+1;
	}
	printf("%d",c);
	return 0;
}
