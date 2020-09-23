#include<iostream>
#include<map>
using namespace std;

map<pair<int,int>,int > mp;

int main()
{
    int n,k;
    cin>>n>>k;

    int x1,y1;
    cin>>x1>>y1;

    for(int i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        mp[{x,y}]=1;
    }

    //up
    int x=x1,y=y1;
    int cnt=0;
    for(int i=1; ;i++)
    {
        y++;
        if(y>n)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;

    for(int i=1; ;i++)
    {
        y--;
        if(y<1)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;
    for(int i=1; ;i++)
    {
        x++;
        if(x>n)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;
    for(int i=1; ;i++)
    {
        x--;
        if(x<1)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;
    for(int i=1; ;i++)
    {
        x++;
        y++;
        if(y>n||x>n)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;
    for(int i=1; ;i++)
    {
        x++;
        y--;
        if(y<1||x>n)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;
    for(int i=1; ;i++)
    {
        x--;
        y++;
        if(y>n||x<1)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }

    x=x1,y=y1;
    for(int i=1; ;i++)
    {
        x--;
        y--;
        if(y<1||x<1)
            break;
        if(mp.find({x,y})!=mp.end())
            break;
        cnt++;
    }
    cout<<cnt;
    return 0;
}

