#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 
int main()
{
    int n,temp,sum = 0;
    cin >> n;
    vector< pair<int,int> > can;
    
    for(int i=0;i<n;i++)
    {  
        cin >> temp;
        can.push_back(make_pair(i+1,temp));
    }
    sort(can.begin(),can.end(),sortbysec);
    for(int i = 0;i<n;i++)
    {
        sum+=can[i].second*i + 1 ;
    }
    cout << sum << endl;
    for(int i = 0;i<n;i++)
    {
        cout << can[i].first << " ";
    }
}