#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],b[n],i,j,t;
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  for(j=0;j<n;j++)
  	scanf("%d",&b[j]);
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		if(b[j]==a[i])
  			t=i;
  			break;
  	}
  }
  printf("%d",t);
  return 0;
}
