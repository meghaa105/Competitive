#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,temp;
    cin >> n >> s;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++)
    {   
        cin >> temp;
        v1.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {   
        cin >> temp;
        v2.push_back(temp);
    }
    temp = 1;
    if(v1[0]==0)
    {
        cout << "NO";
        temp = 0;
        exit(0);
    }
    if(v1[s-1]==0 && v2[s-1]==0)
    {
        cout << "NO";
        temp = 0;
        exit(0);
        
    }

    if(temp)
    {
        int i=s;
        if(v1[s-1]== 1)
        {
            cout << "YES";
        }        
        else
        {
            while(!(v1[i] && v2[i]))
            {
                i++;
                if(i==n)
                {
                    break;
                }
            }
            if(i==n)
            {
                cout << "NO";
                exit(0);
            }
            else
            {
                cout <<"YES";
                exit(0);
            }
        }
    }
   
    
    
    return 0;
}