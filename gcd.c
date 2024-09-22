
#include <stdio.h>

int main() {
    int n1,n2,i,gcd_num;
    
    printf("ENTER TWO NUMBERS:");
     scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd_num=i;
        }
        
    }
        
        printf("gcd of two numbers %d and %d is %d",n1,n2,gcd_num);
    
    return 0;
}