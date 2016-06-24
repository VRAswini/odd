#include <stdio.h>
 void main()
{
    int i, n;
    printf("Enter a no.: ");
    scanf("%d",&n);
    printf("All odd numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
}

