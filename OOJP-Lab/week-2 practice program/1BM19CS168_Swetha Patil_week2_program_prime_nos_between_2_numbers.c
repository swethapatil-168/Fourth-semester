#include<stdio.h>
int main()
{
    int n1,n2,i,j,flag;
    printf("Enter two integers\n");
    scanf("%d %d",&n1,&n2);
    printf("The prime numbers between %d and %d are:\n",n1,n2);
    for(i=n1+1;i<n2;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
           {
             flag=0;
             break;
           }
        }
        if(flag==1 && i!=1)
    printf("%d\n",i);
    } 

    return 0;  
}
