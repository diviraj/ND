#include<stdio.h>
void main()
{
	char d,n;
	scanf("%c %c",&d,&n);
	if(d>n)
		printf("%c is greatest",d);
	else if(n>d)
		printf("%c is greatest",n);
	else
		printf("Both are equal");
}
