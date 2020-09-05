#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int l1;
        string s1;
        cin >> s1;
        l1 = s1.size();
        map <char,int> m;
        int temp,sum = 0;
        map<char,int>::iterator it = m.begin();
        for(int i =0;i<l1;i++)
        {
            char c = s1.at(i);
            it = m.find(c);
            if(it != m.end())
            {
                cout << c << endl;
                sum = 1;
                break;
            }
            else
            {
                m.insert( pair <char,int> (c,0));
            }
        }
        if(sum == 0)
        {
            cout << -1 << endl;
        }
        m.clear();
    }
}