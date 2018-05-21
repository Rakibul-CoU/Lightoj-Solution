#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, n, m, i=0;
    cin>>t;
    while(t--)
    {
        i++;
        cin>>a>>b;
        m=abs(a-b)*4;
        c=(a-0)*4;
        n=m+c+(3*3)+10;
        printf("Case %d: %d\n", i, n);
    }
    return 0;
}
