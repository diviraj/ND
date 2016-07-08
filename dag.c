#include<stdio.h>
void main()
{
	int array[10],b[10][10],k=0,m,i,j,n,temp=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<n*m;i++)
		scanf("%d",&array[i]);
	for(i=0;i<m*n;i++)
		for(j=i+1;j<n*m;j++)
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=array[k];
			k++;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",b[i][j]);
		}
	printf("\n");
	}
}
