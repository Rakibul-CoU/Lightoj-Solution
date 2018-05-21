#include<stdio.h>
int main()
{
    int n, i, j,k, l, m;
    char x[10] = "soda";
    char y[10] = "wine";
    char z[10] = "water";
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &j);
        for(k=1; k<=j; j++)
        {
           scanf("%d %d", &l, &m);
           if(m==y)
                printf("Case %d: Yes", i);
        }
    }
}
