#include<stdio.h>
void main() 
{
   static int i=1,n;
   scanf("%d",&n);
   if (i<=n)
   {
      printf("%d ",i++);
      main();
   }
}
