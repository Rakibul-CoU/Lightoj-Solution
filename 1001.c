#include<stdio.h>
int main()
{
    int n, i, x, c, p;
    scanf("%d", &n);
    if(n<=25)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d", &x);
            c=x/2;
            p=x-c;
             printf("%d %d\n", c ,p);
        }
    }
    return 0;
}
