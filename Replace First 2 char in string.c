 //C-program to rotate given string by first two places....
 
 //Let's build logic for this #cooooooooool

#include <stdio.h>
#include <string.h>
int main() {
   char str1[100],str2[100],str3[100],str4[100],f;
   int i,c,j=0;
     printf("Enter string:");
     fgets(str1,sizeof(str1),stdin);
  
     c=strlen(str1);
     printf("%d",c);
     
    
  
	for(i=0;i<=1;i++)
	{
		str2[i]=str1[i];
		
	}
	strcpy(str4,str1);
	for(i=2;i<c-1;i++)
	{
		str3[j]=str4[i];
		j++;
		
	}
	
	    strcat(str3,str2);
		puts(str3);


   return 0;
}
