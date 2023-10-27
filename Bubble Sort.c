// Bubble Sort

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
	
	void bubbleSort(int arr[],int n)
	{
		int i,j;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(arr[j] > arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}	
			}	
		}	
	}
	
	int main() 
	{
		int n,i;
		printf("\nEnter how many elements do you want in array:");
		scanf("%d",&n);
		
		int arr[n];					
		printf("\nEnter %d elwments in array:",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);	
		}
		printf("\nArray before sorting:");
		printArray(arr,n);
		
		bubbleSort(arr,n);
		
		printf("\nArray after sorting:");
		printArray(arr,n);
		return 0;
	}
