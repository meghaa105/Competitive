#include <bits/stdc++.h>
using namespace std;

// This helps in debugging values
#define deb(x) cout << #x << " " << x << endl
int main()
{
    int n,k,time;
    char c;
    vector <char> v;
    cin >> n >> k;
    while(n--)
    {
        cin >> c;
        v.push_back(c);
    }
    time = 0;
    while(time !=k)
    {
        for(int i = 0;i< v.size()-1;i++)
        {
            if(v.at(i) == 'B' && v.at(i+1) == 'G')
            {   
                v.at(i) = 'G';
                v.at(i+1) = 'B';     
                i++;   
            }
        }
        time++;
        // for(int i = 0;i< v.size();i++)
        // {
        //     cout << v.at(i);
        // }
        // cout << "\n";S
    }
//    GGBGBBBB

    for(int i = 0;i< v.size();i++)
    {
        cout << v.at(i);
    }
}