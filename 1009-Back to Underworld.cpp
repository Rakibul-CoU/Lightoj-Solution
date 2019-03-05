#include<bits/stdc++.h>


using namespace std;

vector<int> vec[20010];

#define white 0
#define likans 1
#define vampire 2

int visited[20010];

int iscorrect(int c,int k)
{
    int len=vec[k].size();
    for(int i=0; i<len; i++)
    {
        int v=vec[k][i];
        if(visited[v]==c)
        {
            return 0;
        }
    }
    return 1;
}

void graphcolor(int k)
{
    for(int i=1; i<=2; i++)
    {
        int ans = iscorrect(i,k);
        if(ans == 1)
        {
            visited[k]=i;
            break;
        }
    }
}

int main()
{
    int test,u,v;
    scanf("%d",&test);
    //vec[20010].clear();
    for(int i=1; i<=test; i++)
    {
        //vec[20010].clear();
        //visited[20010] = {0};
        int t;
        set<int> s;
        set<int> :: iterator it;
        memset(visited, 0, sizeof visited);
        /*int t;
        set<int> s;
        set<int> :: iterator it;*/
        scanf("%d",&t);
        for(int j=1; j<=t; j++)
        {
            scanf("%d%d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
            s.insert(u);
            s.insert(v);
        }
        for(it=s.begin(); it!=s.end(); it++)
        {
            if(visited[*it]==white)
            {
                graphcolor(*it);
            }
        }
        int l=0,v=0;
        for(it=s.begin(); it!=s.end(); it++)
        {
            if(visited[*it] == likans)
            {
                l++;
            }
            else
            {
                v++;
            }
        }
        if(l>v)
        {
            //vec.clear();
            cout<<"Case "<<i<<": "<<l<<endl;
        }
        else
        {
            //vec[20010].clear();
            cout<<"Case "<<i<<": "<<v<<endl;
        }
        vec[20010].clear();
        visited[20010] = {0};
        for(int i=0; i<20010; i++)
        {
            visited[i]=0;
        }
        fill(vec,vec+20010,vector<int>());
    }
    return 0;
}
