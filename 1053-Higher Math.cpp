#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long int tc, TC, a[3];
    cin >> TC;
    tc = 1;

    while(TC>=tc)
    {
        cin >> a[0] >> a[1] >> a[2];
        cout << "Case "<< tc <<": ";
        sort(a,a+3);
        if(a[2]*a[2]== a[0]*a[0]+a[1]*a[1])
            cout << "yes"<< endl;
        else
            cout << "no"<< endl;
        tc++;
    }
    return 0;
}
