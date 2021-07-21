//Minimum element in an array in c by using pass by reference technique

#include<stdio.h>

//Function for finding minimum element in an array

int minof(int a[], int n)
{
	int min=a[n],i;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	return min;
}


int main()
{
	int n,i,a[100],min;
	printf("Printing the smallest element in an array\n");
	printf("Lets go and have a glance in it /n");
	printf("Print the smallest go onnnnnnnnnnnn\n\n\n\n");
	
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	
	
	//Loop for retreiving data from the users...........
	
	printf("Enter the elements to be pushed in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//assigning a value for printing smallest element in an array
	
	min = minof(a,n);
	
	printf("The smallest element in an array is %d",min);
	
	return 0;
}



//Finally programmed runned successfully coooooooooool!
