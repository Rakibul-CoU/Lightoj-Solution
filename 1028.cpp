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
int main()
{
    ll n, m,  j, k, l, cnt;
    int t, i;
    sc("%d", &t);
    for(i=1; i<=t; i++)
    {
        cnt=1;
        sc("%lld", &n);
        //k=sqrt(n);
        for(j=2; j*j<n; j++)
        {
            if(n%j==0)
            {
                cnt+=2;
            }

        }
        if(j*j==n)
        {
                cnt+=1;

        }
        pf("Case %d: %lld\n", i, cnt);
    }
    return 0;
}
