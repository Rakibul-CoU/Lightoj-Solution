#include<bits/stdc++.h>
using namespace std;
unsigned long long int phi[5000006];
// mark[5000006];
unsigned long long int sum[5000006];
void seivephi()
{
    int i, j;
    for(i=1; i<=5000006; i++)
    {
        phi[i]=i;
    }
    phi[1]=1;
    //mark[1]=1;
    for(i=2; i<=5000006; i++)
    {
        if(phi[i]==i)
        {
            for(j=i; j<=5000006; j+=i)
            {
                //mark[j]=1;
                //phi[j]=phi[j]/(i*(i-1));
                phi[j]=phi[j]-phi[j]/i;
            }
        }
    }
}
void calculatesum()
{
    int i;
    sum[1]=0;
    for(i=2; i<=5000006; i++)
    {
        sum[i] = sum[i-1]+(phi[i]*phi[i]);
    }

}
int main()
{
    unsigned long long int i, j, k, n, a, b, t;
    seivephi();
    calculatesum();
    scanf("%llu", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%llu %llu", &a, &b);
        printf("Case %llu: %llu\n",i, sum[b]-sum[a-1]);
    }
    return 0;
}
