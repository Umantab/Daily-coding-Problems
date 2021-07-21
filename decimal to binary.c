//DECIMAL TO BINARY CONVERSION

#include<stdio.h>
int main()
{
	int n,i=0,q,r,m,p,num,b,c,j;
	scanf("%d",&n);
	
	m = n/2;
	p= n%2;
	int a[100];
//	printf("%d%d",m,p);  //Printing corresponding remainder and quotient
	
	
	//Now we need to loop over each remainder and quotient and update it's value
	//I finally won in printing the decimal numbers but not able to print in reverse order //Let's Check it out
	
	
	//Finally I got the solution with Harry
	num=n;
	
	while(num>0)
	{
	
		
		
		
		b = num/2;
		c = num%2;
		a[i] = c;
		i++;
	
//		printf("%d",c);
		num=b;
	
		
		
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	
	

		
	
//	for(i=0;i<=m;i++)
//	{
//		q=m/2;
//		r=n%2;
////		q=q;
//		printf("%d",r);
//	}
	
	return 0;
}



//I finally solved it #cool
