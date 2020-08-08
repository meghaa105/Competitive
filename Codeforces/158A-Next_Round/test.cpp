#include <bits/stdc++.h>
using namespace std;

// #define deb(x) cout << #x << " " << x << endl
int main()
{
    int n,k,temp,count;
    vector <int> v;
    cin >> n >> k;
    while(n--)
    {
        cin >> temp;
        v.push_back(temp);
    }
    count = 0;
    for(int i = 0; i < v.size();i++)
    {
        if(v.at(i) >= v.at(k-1) && v.at(i))
        {
            count++;
        }
    }
    cout << count << endl;
}