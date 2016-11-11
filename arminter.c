#include<stdio.h>
int main(){
    int num,r,sum=0,temp,a,b;
    printf("Enter the range: ");
    scanf("%d%d",&a,&b);
    printf("Enter a number: ");
    scanf("%d",&num);
    for(num=a;num<b;num++)
    {
    temp=num;
    while(num!=0){
         r=num%10;
         num=num/10;
         sum=sum+(r*r*r);
    }
    }
    if(sum==temp)
         printf("%d is an Armstrong number",temp);
    else
         printf("%d is not an Armstrong number",temp);

    return 0;
}
