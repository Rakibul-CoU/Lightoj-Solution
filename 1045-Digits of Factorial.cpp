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
double arr[1000005];
int main()
{
    int t, n, b, i, j;
    ll cnt;
    //cum[0] = 0;
    for(i=1; i<=1000000; i++)
    {
        arr[i]=arr[i-1] + log(i);
    }
    /*for(i=1;i<=10;i++)
        cout<<arr[i]<<endl;*/
    sc("%d", &t);
    for(j=1; j<=t; j++)
    {
        sc("%d%d", &n, &b);
        cnt=arr[n]/log(b) + 1;
        printf("Case %d: %lld\n", j, cnt);
    }
    return 0;
}
