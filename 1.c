#include<stdio.h>
int main()
{
    int n,i,x,y,j;
    scanf("%d", &n);
    if(n<=125)
    {
    for(i=1; i<=n; i++)
    {
      scanf("%d %d", &x, &y);
       if(x<=10 && y<=10)
       j=x+y;
         printf("Case %d: %d\n", i, j);


    }
    }
}
