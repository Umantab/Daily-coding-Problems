//Checking whether the given number is prime or not okk cooooooooooool!

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	
	int prime=1;
	for(i=2;i*i<n;i++)
	{
		
		
		if(n%i==0)
		{
			prime=0;
		}
		
	}
	
	if(prime)
	{
		printf("The given number %d is prime",n);
	}
	else
	{
			printf("The given number %d is not a prime",n);
		
	}
//	for(i=2;i<sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			printf("%d is a composite number",n);
//			break;
//		}
//		else
//		{
//			printf("%d is a prime number",n);
//			break;
//		}
//	}
	
	return 0;
	
}


//The above program is running evrey number but it is not able to check for 1 and 2 
//We need to solve that issue ok cool I will do that...........

//Finally I got the solution with harry

//U need to take a variaable and assign a value to it 
//Check if it is a prime change the value and make a if clause and pass that variable as a parameter and check
//Whether it is prime or not  #cool
