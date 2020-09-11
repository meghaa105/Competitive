#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int l1,l2,l3;
        cin >> l1 >> l2>> l3;
        map <int,int> m;
        int temp,sum = 0;
        map<int,int>::iterator it = m.begin();
        while(l1--)
        {
            cin >> temp;
            m[temp] = 0;
        }
        while(l2--)
        {
            cin >> temp;
            it = m.find(temp);
            if(it != m.end())
            {
                m[temp]++;
            }
        }
        while(l3--)
        {
            cin >> temp;
            it = m.find(temp);
            if(it!=m.end()&& it->second != 0)
            {
                cout << temp << endl;
                sum = 1;
            }
        }
        // cout << m.size();
        if(sum == 0)
        {
            cout << -1 << endl;
        }
    }
}