#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);	
	}	
}

void insertionSort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

int main() 
{
	int n,i;
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	int arr[n];
	
	printf("\nEnter %d elements in array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray before sorting:");
	printArray(arr,n);
	
	insertionSort(arr,n);
	printf("\nArray after sorting:");
	printArray(arr,n);
	return 0;
}
