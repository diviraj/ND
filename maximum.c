#include<stdio.h>
#include<math.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n],max=0,i,t[n];
  for(i=0;i<n;i++)
  	scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
  	t[i]=abs(a[i]-a[i+1]);
  	if(t[i]>max)
  		max=t[i];
  }
       printf("%d",max);
  return 0;
}
