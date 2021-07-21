//Returning maximum element in an array .........

#include<stdio.h>

int maxof(int arr[],int n)
{
	//we have done by using pass by reference means we can change value with in the function too same as 
	int max=0,i;
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	
	}
		return max;
}


int main()
{
	int arr[100],n,i,max;
	printf("Enter elements in an array");
	printf("Enter size of the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=maxof(arr,n);
	printf("the maximum element is %d",max);
	
	
	
}
