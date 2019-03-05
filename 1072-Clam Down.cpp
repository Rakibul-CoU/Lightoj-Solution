#include<bits/stdc++.h>
using namespace std;
int main()
{
    const double PI=acos(-1);
    int s,t;
    cin>>t;
    for(s=1;s<=t;s++)
    {
        double R,r;
        int n;
        cin>>R>>n;
        r = (R*sin(PI/n)) / (sin(PI/n)+1);

        printf("Case %d: %.10lf\n",s,r);
    }
    return 0;
}
