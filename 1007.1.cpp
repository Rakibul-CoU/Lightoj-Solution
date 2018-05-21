#include<bits/stdc++.h>
#define n 5000000
using namespace std;
int phi[n+2], mark[n+2];
unsigned long long sum[n+2];
void ceivephi()
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
                for(j=i; j<=n; j+=i)
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
    int t, a, b;
    ceivephi();
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        cin>>a>>b;
                    sum[1]=0;
        for(int i=2; i<=n; i++)
        {
            sum[i]=phi[i];
            sum[i]*=phi[i];
            sum[i]+=sum[i-1];
        }
        printf("Case %d: %llu\n", i, sum[b]-sum[a-1]);
    }
    return 0;
}
