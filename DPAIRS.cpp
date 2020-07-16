#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n,m,count;
    cin >> n >> m;
    vector <pair< int,int >> t(n),k(m);
    for(int i=0;i<n;i++)
    {
        cin >> t[i].first;
        t[i].second = i;
    }
    for(int i=0;i<m;i++)
    {
        cin >> k[i].first;
        k[i].second = i;
    }
    sort(t.begin(),t.end());
    sort(k.begin(),k.end());

    for(int i=0;i<n;i++)
    {
        cout<<t[i].second<<" "<<k[m-1].second<<"\n";
    }
    for(int j=0;j<m;++j) 
    {
		cout<<t[0].second<<" "<<k[j].second<<"\n";
	}

    return 0;  

}