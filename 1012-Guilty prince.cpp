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
#define white 0
#define black 1
using namespace std;
int res=0;
int fx[4]= {-1, +1, 0, 0};
int fy[4]= {0, 0, -1, +1};
char s[21][21];
int visited[21][21];
int iscorrect(int x, int y, int row, int col)
{
    if(x>=0 and x<row and y>=0 and y<col and visited[x][y] == white and s[x][y] == '.')
    {
        return 1;
    }
    return 0;
}
void DFS(int row, int col, int x, int y)
{
    int i;
    visited[x][y] = black;
    for(i=0; i<4; i++)
    {
        int dx=x+fx[i];
        int dy=y+fy[i];
        int ans=iscorrect(dx, dy, row, col);
        if(ans == 1)
        {
            res++;
            DFS(row, col, dx, dy);
        }
    }
}

int main()
{
    int t,n, m=0, i, j, k;
    cin>>t;
    while(t--)
    {
        m++;
        int row, col, posx, posy;
        res=1;
        cin>>col>>row;
        //int visited[row+1][col+1]={0};
        for(i=0; i<21; i++)
        {
            for(j=0; j<21; j++)
            {
                visited[i][j]=white;
            }
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='@')
                {
                    posx=i;
                    posy=j;
                }
            }
        }
        DFS(row, col, posx, posy);
        /*cout<<endl;
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
               cout<<"Case "<<m<<": "<<s[i][j]<<endl;
            }
        }*/
        cout<<"Case "<<m<<": "<<res<<endl;
    }
    return 0;
}
