#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the two Numbers");
    scanf("%d%d",&a,&b);
    
    if(a==b)
    {
        printf("The Given Numbers are Equal\n");
    }else if(a>b)
    {
        printf("%d is greater than %d\n",a,b);
    }else
    {
        printf("%d is greater than %d\n",b,a);
    }
    return 0;
}