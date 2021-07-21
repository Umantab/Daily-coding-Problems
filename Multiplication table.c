//c program for multiplication table of given number


#include<stdio.h>
int main()
{
	//Taking number as input
	int i,no;
	printf("Enter number for which u need to generate multiplication table = ");
	scanf("%d",&no);

	
	//Logic for printing multiplication table :--]
	
	for(i=0;i<=10;i++)
	{
		printf("%d X %d = %d \n",no,i,no*i);
	}
	
	
}
