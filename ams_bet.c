#include <stdio.h>
#include <math.h>
int main()
{
    int n1, n2, i,temp,temp1,rem,n=0,a=0;
    scanf("%d %d",&n1,&n2);
    for(i=n1+1;i<n2;i++)
    {
        temp1= i;
        temp = i;
        while (temp!=0)
        {
            temp/=10;
            n++;
        }
        while (temp1!=0)
        {
            rem=temp1%10;
            a+=pow(rem,n);
            temp1/= 10;
        }
        if(a==i) 
        {
            printf("%d ",i);
        }
        n=0;
        a= 0;
    }
    return 0;
}
