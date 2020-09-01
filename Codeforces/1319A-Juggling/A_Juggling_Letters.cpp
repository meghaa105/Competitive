#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    vector <string> s;
    string str;
    cin >> n;
    
    while(n--)
    {
        int ar[80] = {0};
        cin >> l;
        while(l--)
        {
            cin >> str;
            s.push_back(str);
            cout << str << endl;
        }
        for(int i = 0;i<s.size();i++)
        {
            str = s[i];
            cout <<str << endl;
            for(int j=0;j<str.size();j++)
            {
                if (str.at(j) >= 'a' && str.at(j) <= 'z') 
                {
                    l = str.at(j) - 'a';
                    ++ar[l];
                }
            }
        }
        for(int i = 0;i<26;i++)
        {
            l = s.size();
            if(ar[i]%l!=0)
            {
                cout << "NO" << endl;
                n = -1;
                break;
            }
        }
        if(n== -1)
        {
            cout << "YES" << endl;
        }
        s.clear();        
    }
    
}