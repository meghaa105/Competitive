#include<bits/stdc++.h>
using namespace std;
bool compareInterval(Interval i1, Interval i2) 
{ 
    return (i1.start < i2.start); 
} 
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int l,temp;
        cin >> l;
        vector<int> v;
        for(int i =0;i<l;i++)
        {
            cin >> temp;
            v.push_back(temp); 
        }
        int min = INT_MAX;
        int max = INT_MIN;
        int count=0;
        // bool temp1 = is_sorted(v.begin(),v.end());
        // if(temp1)
        // {
        //     cout << 1 << 1 << endl;
        // }
        // temp1 = is_sorted(v.begin(),v.end(),greater<int>());
        // if(temp1)
        // {
        //     cout << l << l << endl;
        // }
        temp =is_sort(v.begin(), v.end(), compareInterval); 
        
        {
            for(int i = 0;i<l-1;i++)
            {
                count = 1;
                for(int j = i+1;j<l;j++)
                {
                    if(v[i]>v[j])
                    {
                        count++;
                    }
                }
                if(count < min)
                {
                    min = count;
                }
                if(count > max)
                {
                    max = count;
                }
            }
            cout << min <<" "<< max << endl;
        }        
    }
}