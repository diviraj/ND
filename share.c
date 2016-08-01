#include<stdio.h>
#include<math.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n],max=0,min=0,i,t;
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
  	if(a[i]>max)
  		max=a[i];
  	if(a[i]<min)
  		min=a[i];
  }
  	   t=max-min;
       printf("%d thousand",t);
  return 0;
}
