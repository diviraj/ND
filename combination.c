#include <stdio.h>
void combinationUtil(int arr[],int data[],int start,int end,int index,int r);
void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
void combinationUtil(int arr[], int data[], int start, int end,int index, int r)
{
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
int main()
{
	int n,i,r,arr[100];
	scanf("%d",&r);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
    printCombination(arr, n, r);
} 
