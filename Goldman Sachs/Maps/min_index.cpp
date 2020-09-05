#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int l1  = s1.size();
        int l2 = s2.size();
        map<char,int>m;
        map<char,int> :: iterator it = m.begin();
        int min = l1;
        char c_min = '$';
        for(int i=0;i<l1;i++)
        {
            char c = s1.at(i);
            it = m.find(c);
            if(it==m.end())
            {
                m.insert( pair<char,int> (c,i));
            }

        }
        for(int i=0;i<l2;i++)
        {
            char c = s2.at(i);
            it = m.find(c);
            if(it!=m.end())
            {
                if(it->second < min)
                {
                    min = it->second;
                    c_min = c;
                }
            }
        }
        cout << c_min << endl;

    }
}