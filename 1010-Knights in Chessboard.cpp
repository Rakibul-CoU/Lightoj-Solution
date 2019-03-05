#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
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
#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))
using namespace std;
int main()
{
    int t, i;
    int m, n, mn, cnt, x;
    sc("%d", &t);
    for(i=1; i<=t; i++)
    {
        sc("%d %d", &m, &n);
        mn = m * n;
        if(m==1 || n==1)
            cnt = mn;
        else if(m==2 || n==2)
        {
            if(m==2)
                x = n;
            else
                x = m;
            if(x%4 == 1)
                cnt = x+1;
            else if(x%4 == 2)
                cnt = x+2;
            else if(x%4 == 3)
                cnt = x+1;
            else if(x%4 == 0)
                cnt = x;
        }
        else if(mn%2 == 0)
            cnt = mn/2;
        else
            cnt = (mn/2)+1;
        pf("Case %d: %d\n", i, cnt);
    }
    return 0;
}
