#include<stdio.h>
int main()
{
    int t,a,b, count=0,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
     for(i=a; i<=b; i++)
        {
            if(i%3!=0)
                count++;
        }
      }
       printf("%d", count);
}
