#include <stdio.h>
int main()
{
    int a,b;
    long long int c=1;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b!= 0)
    {
        c*=a;
        b--;
    }

    printf("%lld",c);

    return 0;
}
