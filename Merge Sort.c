//Merge Sort

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

void merge(int arr[],int l,int mid,int r)
{
	int i,j,k;
	int len1=mid-l+1;
	int len2=r-mid;
	
	//create temp arrays
	int left[len1],right[len2];
	
	//here we are copying data into temp arrays
	for(i=0;i<len1;i++)
	{
		left[i]=arr[l+i];
	}
	for(j=0;j<len2;j++)
	{
		right[j]=arr[mid+1+j];
	}
	
	i=0,j=0,k=l;
	
	while(i<len1 && j<len2)
	{
		if(left[i] <= right[j])
		{
			arr[k]=left[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=right[j];
			j++;
			k++;
		}
	}
	
	while(i < len1)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	
	while(j < len2)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[],int l,int r)
{
	if(l < r)
	{
		int mid= l +(r-l)/2;
		
		
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);	
		merge(arr,l,mid,r);
	}	
}

int main() 
{
	int n,i;
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter %d elements in array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray Before sorting:");
	printArray(arr,n);
	
	mergeSort(arr,0,n-1);
	
	printf("\nArray after sorting:");
	printArray(arr,n);
	return 0;
}
