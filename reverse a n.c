//C program to reverse a number 


#include<stdio.h>
int main()
{
	int num ,rev=0,ram;
	scanf("%d",&num);
//	printf("The num is %d",num);
	//Reversing a number logic
	while(num!=0)
	{
	ram=num%10;
	rev = rev*10+ram;
	num=num/10;
	
}
printf("%d",rev);
//return 0;

//but if we give 20 30 it is unable to reverse the number
}

