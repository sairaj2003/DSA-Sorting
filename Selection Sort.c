#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main() 
{
	int n,i,j;
	
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("\nEnter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0	;i<n-1;i++)
	{
		int min=i;
		
		for(j=i+1;j<n;j++)
		{
			if(arr[j] < arr[min])
			{
				min=j;
			}
		}
		if(min != i)
		{
			swap(&arr[i],&arr[min]);
		}
	}
	
	printf("\n---------------------------------------");
	printf("\nArray after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0;
}
