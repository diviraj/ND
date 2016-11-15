#include <stdio.h>
void shiftArrayOnePosition(int *array, int size)
{
    int i, temp;
    temp = array[0];
    for(i = 0; i < size-1; i++) 
    {
        array[i] = array[i+1];
    }   
    array[i] = temp;
}
void rotateArray(int *array, int size, int N)
{
    int i;
    for(i = 0; i < N; i++)
    {
        shiftArrayOnePosition(array, size);
    }
    return;
}
 int main()
 {
	int n,i,d;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&d);
    rotateArray(array, n, d);
    printf("Rotated Array\n");
    for(i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
 
    return 0;
}
