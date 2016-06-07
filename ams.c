#include <stdio.h>
int main()
{
    int n,a,rem,c=0;
    scanf("%d",&n);
    a=n;
    while(a!= 0)
    {
        rem=a%10;
        c+=rem*rem*rem;
        a/= 10;
    }
    if(c==n)
        printf("%d is an Armstrong number",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}
