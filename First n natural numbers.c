//Finding sum of first n natural numbers

#include<stdio.h>
int main()
{
	int i,n,sum;
	
	//Taking input from the user
    printf("Enter number limit for printing natural numbers ----------> ");
	scanf("%d",&n);
	printf("Printing upto first %d natural numbers\n",n);
	
	//Logic for printing first 10 natural numbers
	//Time complexity taken by this is O(n) so we need to modify this
//	sum=0;
//	for(i=1;i<=n;i++)
//	{
//		printf("The %d th natural number is %d\n",i,i);
//		sum=sum+i;
//	
//	}
//		printf("The sum of first %d natural numbers is %d",n,sum);

//Logic for O(1) time complexity is:----
printf("%d",(n*(n+1))/2);
	return 0;
}
