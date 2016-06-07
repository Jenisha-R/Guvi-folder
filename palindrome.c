#include <stdio.h>
int main()
{
    int n,a,b=0,rem;
    scanf("%d",&n);
  	a=n;
    while(n!= 0)
    {
        rem=n%10;
        b=b*10+rem;
        n=n/10;
    }
    if(a==b)
    	printf("%d is a palindrome",a);
    else
    	printf("%d is not a palindrome",a);

    return 0;
}
