#include <stdio.h>
int main(void)
{
	int n,m,i;
	printf("Enter the table number\n");
	scanf("%d",&n);
	printf("Enter the last value\n");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("%d * %d = %d\n",i,n,i*n);
	}
	return 0;
}
