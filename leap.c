#include <stdio.h>
int main()
{   
	int n;
	scanf("%d",&n);
	if(n%4==0)
    	printf("%d is a leap year",n);
    else
    	printf("%d is not a leap year",n);
    return 0;
}
