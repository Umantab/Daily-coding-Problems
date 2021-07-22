#include<stdio.h>

//Function
int funofmis(int a[],int n)
{
	int i,b;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==(a[i+1]-1))
		{
			continue;
		}
		else
		{
			b=1+a[i];
			break;
		}
	}
	return b;
}
int main()
{
	int n,a[100],i,mis;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	mis = funofmis(a,n);
	printf("%d",mis);
	return 0;
	
}
