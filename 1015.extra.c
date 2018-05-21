#include<stdio.h>
int main()
{
    long long int a, b, c, d, i, j,sum;
    scanf("%lld", &a);
    for(i=1; i<=a; i++)
    {
        sum=0;
        scanf("%lld", &b);
        for(j=1; j<=b; j++)
        {
            scanf("%lld", &c);
            if(c>0)
                sum+=c;
        }
            printf("Case %lld: %lld\n", i,sum);
    }
    return 0;
}
