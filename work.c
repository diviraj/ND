#include <stdio.h>
#include<string.h>
void Workingday(char a[])
	{
		char b[10]="Sunday";
		if(strcmp(a,b)==0)
			printf("False");
		else
			printf("True");
	}
int main() {
	char a[100];
	scanf("%s",a);
	Workingday(a);
	return 0;
}
	
