#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int i,l,flag=0,c=0;
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122||a[i]>=48&&a[i]<=57)
			flag=1;
		else
			c++;
	}
	if(flag!=0)
		printf("%d",c);
	return 0;
}
