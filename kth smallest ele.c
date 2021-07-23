#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30],k;
        printf("Enter the value of N \n");
        scanf("%d", &n);
        
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
                //Asscending order
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
        scanf("%d",&k);
        printf("The %d smallest element is %d",k-1,number[k-1]);
// 
//        printf("The numbers arranged in ascending order are given below \n");
//        for (i = 0; i < n; ++i)
//            printf("%d\n", number[i]);
            
         
 
    }
