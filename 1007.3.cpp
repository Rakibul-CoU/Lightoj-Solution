#include<bits/stdc++.h>
using namespace std;
int phi[1000006], mark[1000006], sum[10000000];
int a[1000007];
void seivephi(int n)
{
    int i, j;
    for(i=2; i<=n; i++)
    {
        phi[1]=1;
        mark[0]=mark[1]=1;
        for(i=2; i<=n; i++)
        {
            phi[i]=i;
        }
        for(i=2; i<n; i++)
        {
            if(mark[i]==0)
            {
                for(j=i*2; j<=n; j+=i)
                {
                    phi[j]=(phi[j]*(i-1))/i;
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
    int n, k, l, t, s=0;
    seivephi(int n);
    sum[1]=1;
    for(int i=2; i<=n; i++)
    {
        sum[i]=phi[i]*phi[i];
        s=s+sum[i];

    }
    printf("%d", s);
    return 0;
}
