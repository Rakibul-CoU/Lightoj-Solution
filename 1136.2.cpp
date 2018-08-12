/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
**/
#include<bits/stdc++.h>
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
using namespace std;
ll ma(ll n, ll m)
{
    ll i, k, l, sum, cnt, a, b, c, d, a1, b1, c1, d1;
    a=m/3;
    //cout<<a<<endl;
    b=a*2;
    //cout<<b<<endl;
    c=m%3;
    //cout<<c<<endl;
    if(c==0)
        d=0;
    else
        d=c-1;
    //cout<<d<<endl;
    a1=(n-1)/3;
    //cout<<a1<<endl;
    b1=a1*2;
    //cout<<b1<<endl;
    c1=(n-1)%3;
    //cout<<c1<<endl;
    if(c1==0)
        d1=0;
    else
        d1=c1-1;
    //cout<<d1<<endl;
    cnt=(b+d)-(b1+d1);
    //cout<<cnt<<endl;
    return cnt;
}
int main()
{
    ll n, m, a, b=0, i, j, k, sum=0, t, cnt;
    sc("%lld", &t);
    while(t--)
    {
        cnt=0;
        sum=0;
        sc("%lld %lld", &n, &m);
        /*for(i=n; i<=m; i++)
        {
            sum=0;
            for(j=1; j<=i; j++)
            {
                sum+=j;
            }
            //cout<<sum<<endl;
            if(sum%3==0)
            {
                cnt++;
            }
        }*/
        k=ma(n,m);
        pf("Case %lld: %lld\n", ++b, k);
    }
    return 0;
}
