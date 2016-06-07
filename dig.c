#include <stdio.h>
int main()
{
    long long int n;
    int count=0;
    scanf("%lld", &n);
    while(n!=0)
    {
        n=n/10;             
        count++;
    }

    printf("Number of digits: %d",count);
}
