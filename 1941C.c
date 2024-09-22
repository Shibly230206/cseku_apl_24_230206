#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        for(int i=0;i<n;i++)
        {
            scanf("%s",s[i]);
        }
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]-'m')
            {
                count++;
            }
        }
        int count1=0,count3=0;
         for(int k=0;k<n;k++)
        {
            if(s[k]-'p')
            {
                count1++;
            }
        }
        count3=count+count1;
    }
    return 0;
}