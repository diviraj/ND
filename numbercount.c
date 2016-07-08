#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int i,l,c=0;
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]>=48&&a[i]<=57)
			c++;
	}
	printf("%d",c);
	return 0;
}
