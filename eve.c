#include <stdio.h>
int main()
{
    int n1, n2, i, flag;
    scanf("%d %d", &n1, &n2);
    printf("The even numbers are:");
    while (n1 < n2)
    {
        flag=0;
        for(i=0;i<n1;i++)
        {
            if(n1%2==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
            printf("%d ",n1);
		n1++;
    }

    return 0;
}
