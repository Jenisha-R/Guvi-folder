#include <stdio.h>
int main()
{   
	int i,n,sum=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of %d natural numbers = %d",n,sum);
	return 0;
}
