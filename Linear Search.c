//Linear Search

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

void linearSearch(int arr[],int n,int s)
{
	int i,flag=0;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("\n%d is found in array...",s);
	}
	else
	{
		printf("\n%d is not found in array...",s);
	}	
}

int main() 
{
	int n,s;
	int i;
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nThe elements in array are:");
	printArray(arr,n);
	
	printf("\nEnter element that you want to search in array:");
	scanf("%d",&s);
	
	linearSearch(arr,n,s);
	return 0;
}
